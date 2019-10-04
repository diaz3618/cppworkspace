#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    // Make sure printer.exe is actually printer.exe
    qDebug() << "MD5: " << QString::fromStdString(md5->getHashFromFile("printer.exe"));
    if(md5->getHashFromFile("printer.exe") == "1e47ad46ba3bcca1f8f022fcdfa5480b") {
        qDebug() << "IT MATCHES!!";
    } else{ remove("printer.exe"); parent->close();  }


    //ui->toolButton->setVisible(false);
    qDebug() << "TEST: " << cfg_file->po_placeholder();
    qDebug() << cfg_file->filesize();
    for(auto x : cfg_file->_settings_map()){
        qDebug() << QString::fromStdString(x.first) << ": " << x.second << "\n";
    }


    // Run config_file dialog if no file is found or is incorrect
    if(!cfg_file->found() || cfg_file->po_number().toInt() <= 0 || cfg_file->store_number().toInt() <= 0){
        conf_dialog->setModal(true);
        conf_dialog->exec();

        if(cfg_file->found()){
            // Restart application
            QStringList args = QApplication::arguments();
                args.removeFirst();
                QProcess::startDetached(QApplication::applicationFilePath(), args);
                QCoreApplication::quit();
            exit(12);
        } else { parent->close(); }
    }

    // Set default values if nothing is set in config file
    if(cfg_file->filesize() < 80){
        cfg_file->create_file(cfg_file->store_number().toStdString(), cfg_file->po_number().toStdString(), true, true);
    }
    //ui->actionPO_Number_placeholder_text->setChecked(true);
    //ui->actionStore_Order_Number_Placeholder_Text->setChecked(cfg_file->store_placeholder());




    qDebug() << "version: " << VERSION << "\n";
    ui->setupUi(this);


    //ui->name_input->setText(store_id + " - " + po_id);  // FOR TESTING ONLY

    // Stacked Widget && toolButton actions
    ui->stackedWidget->setCurrentIndex(0);  // Set Special Order stack as default
    ui->toolButton->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonIconOnly);
    ui->toolButton->setToolTip("Switch between Special Order and Store Order.");
    ui->toolButton->setToolTipDuration(5000);
    ui->toolButton->setStyleSheet("QToolButton::menu-indicator{width:0px;}");   // Remove menu-indicator arrow
    ui->toolButton->addAction(ui->actionSpecial_Order);
    ui->toolButton->addAction(ui->actionStore_Order);
    ui->actionStore_Order->setIconVisibleInMenu(false);
    ui->actionSpecial_Order->setIconVisibleInMenu(false);
    ui->actionStore_Order->setIconVisibleInMenu(true);
    ui->actionSpecial_Order->setIconVisibleInMenu(true);

    // Date & Time
    ui->date_input->setDate(QDate::currentDate());  // Set current date to date_input
    ui->pickup_date->setDate(QDate::currentDate());  // Set current date to pickup_date

    // Store/Special order number validation
    ui->po_input->setValidator(new QIntValidator(0, 70599999, this));   // Validate po_input (only accepts numbers from 0 to 70599999)
    ui->order_num->setMaxLength(11);
    ui->name_input->setMaxLength(19);
    ui->name_input2->setMaxLength(19);

    // Print button Signal/Slot connect
    connect(ui->print_button, &QPushButton::clicked, this, &MainWindow::controller);
}


MainWindow::~MainWindow()
{
    delete ui;
    delete author;
    delete conf_dialog;
    delete cfg_file;
    delete md5;
}

// Name input size validation (less than 0 returns false)
bool MainWindow::name_val(QLineEdit *txt) const
{
    if(txt->text().size() >= 1) {
            return true;
    } else {
        return false;
    }
}

// Creates PDF File (special order tag) [FUNCTION RUNS INSIDE "print_file" FUNCTION]
void MainWindow::create_file()
{
    // Dynamically resizing lambda
    const auto font_size = [this]() -> int {
            const int input_len = ui->name_input->text().size();
            int sz = 110;
            if(input_len >= 14){
                for(int i = 0; i < input_len; i++)
                    {sz -= 2;}
            } qDebug() << "Font size: " << sz; return sz;
    };

    // Order number Lambda
    const auto order_num = [this]() -> QString {
            if(ui->stackedWidget->currentIndex() == 0)
                return ui->po_input->text();
            else { return ui->order_num->text(); }
    };

    // Customer name Lambda
    const auto name = [this]() -> QString {
        if(ui->stackedWidget->currentIndex() <= 0) { return ui->name_input->text();}
        else { return ui->name_input2->text(); }
    };

    // Date Lambda
    const auto date = [this]() -> QString {
        switch (ui->stackedWidget->currentIndex()) {
        case 0: {
            // Today is checked
            if(ui->today_checkbox->isChecked()){
                ui->date_input->setDate(QDate::currentDate());
                return ui->date_input->text();
            }
            else { return ui->date_input->text(); }
        }

        // Store order pickup date
        case 1: { return ui->pickup_date->text(); }

        default:
            return ui->stackedWidget->currentIndex() <= 0 ? ui->date_input->text() : ui->pickup_date->text();
        }
    };


    // Debug (print) customer name, po and received date
    qDebug() << "\n[*]DEBUG MSG:\n " << name().toUpper() << "\n" << order_num() << "\n" << date();


    /*============================================================================*/
    // Write PDF file
    QPdfWriter writer(FILENAME);
    writer.setPageSize(QPagedPaintDevice::A4);
    writer.setPageOrientation(QPageLayout::Landscape);
    writer.setPageMargins(QMargins(30, 30, 30, 30));

    QPainter painter(&writer);
    painter.setPen(Qt::black);
    painter.setFont(QFont("Calibri", font_size()));

    QRect r = painter.viewport();

    QString tag = name().toUpper()+"\n"+order_num()+"\n"+date();
    /*
     * If the input_len is longer than 14, then font_size
     * will end up being less than 110. If this is the case,
     * only the name's font size should be changed; everything
     * else should remain the same size (110).
    */
    if(font_size() != 110)
    {
        tag = name().toUpper()+"\n\n\n";
        painter.drawText(r, Qt::AlignCenter, tag);
        tag = "\n"+order_num()+"\n"+date();
        painter.setFont(QFont("Calibri", 110));
        painter.drawText(r, Qt::AlignCenter, tag);
    }
    else
    {
        painter.drawText(r, Qt::AlignCenter, tag);
    }

    painter.end();
}

// Creates and prints file
void MainWindow::print_file()
{
    create_file();

    qDebug() << "\n[*]DEBUG MSG:\t " << "[+]Print function executed";
    std::string file = FILENAME;
    std::string cmd = "printer.exe " + file;

    switch (ui->stackedWidget->currentIndex())
    {
    case 0:
        qDebug() << "\tPrinting Special Order Tag...";
        WinExec(cmd.c_str(), SW_HIDE);
        break;
    case 1:
        qDebug() << "\tPrinting Store Order Tag...";
        WinExec(cmd.c_str(), SW_HIDE);
        break;
    }
}


// Print x amount of times (Needs optimizing)
void MainWindow::keyPressEvent(QKeyEvent *key)
{
    // Ctrl + h     Author box
    if((key->key() == Qt::Key_H)  && QApplication::keyboardModifiers() && Qt::ControlModifier)
    {
        author->setModal(true);
        author->exec();
    }


    // "Quick" print (doesn't have to validate po)
    auto Print = []() {
        std::string file = FILENAME;
        std::string cmd = "printer.exe " + file;
        qDebug() << "Printing...";
        WinExec(cmd.c_str(), SW_HIDE);};

    const auto size_val = [this]() -> bool {
            switch(ui->stackedWidget->currentIndex())
            {
            case 0:
                if(ui->po_input->text().size() > 1 && ui->name_input->text().size() > 1)
                { return true; }
                break;
            case 1:
                if(ui->name_input2->text().size() > 1 && ui->order_num->text().size() > 1)
                { return true; }
                break;
            }
    };

    if(size_val())
    {
        auto order_val = [this]() -> bool {
                switch(ui->stackedWidget->currentIndex())
                {
                case 0:
                    return po_val();
                case 1:
                    return order_num_val();
                default:
                    return 0;
                }};

        // Create one lambda to rule them all....eventually..maybe
        //std::map<Qt::Key, int> key_map { {Qt::Key_2, 2}, {Qt::Key_3, 3} };

        // Enter key print
        if(key->key() == Qt::Key_Enter)
            controller();

        // Ctrl + 2
        if((key->key() == Qt::Key_2)  && QApplication::keyboardModifiers() && Qt::ControlModifier)
        {
            //qDebug() << key->key();
            create_file();

            if(order_val())
                for(int i = 0; i < 2; i++)
                    Print();
        }

        // Ctrl + 3
        if((key->key() == Qt::Key_3)  && QApplication::keyboardModifiers() && Qt::ControlModifier)
        {
            create_file();

            if(order_val())
                for(int i = 0; i < 3; i++)
                    Print();
        }

        // Ctrl + 4
        if((key->key() == Qt::Key_4)  && QApplication::keyboardModifiers() && Qt::ControlModifier)
        {
            create_file();

            if(order_val())
                for(int i = 0; i < 4; i++)
                    Print();
        }

        // Ctrl + 5
        if((key->key() == Qt::Key_5)  && QApplication::keyboardModifiers() && Qt::ControlModifier)
        {
            create_file();

            if(order_val())
                for(int i = 0; i < 5; i++)
                    Print();
        }

        // Ctrl + 6
        if((key->key() == Qt::Key_6)  && QApplication::keyboardModifiers() && Qt::ControlModifier)
        {
            create_file();

            if(order_val())
                for(int i = 0; i < 6; i++)
                    Print();
        }

        // Ctrl + 7
        if((key->key() == Qt::Key_7)  && QApplication::keyboardModifiers() && Qt::ControlModifier)
        {
            create_file();

            if(order_val())
                for(int i = 0; i < 7; i++)
                    Print();
        }

        // Ctrl + 8
        if((key->key() == Qt::Key_8)  && QApplication::keyboardModifiers() && Qt::ControlModifier)
        {
            create_file();

            if(order_val())
                for(int i = 0; i < 8; i++)
                    Print();
        }

        // Ctrl + 9
        if((key->key() == Qt::Key_9)  && QApplication::keyboardModifiers() && Qt::ControlModifier)
        {
            create_file();

            if(order_val())
                for(int i = 0; i < 9; i++)
                    Print();
        }
    }
}

// Order type StackedWidget action slots
void MainWindow::on_actionSpecial_Order_triggered()
{
    if(ui->stackedWidget->currentIndex() != 0)
        ui->stackedWidget->setCurrentIndex(0);
    qDebug() << "Current stackedWidget index = " << ui->stackedWidget->currentIndex() << "\n";
}
void MainWindow::on_actionStore_Order_triggered()
{
    if(ui->stackedWidget->currentIndex() != 1)
        ui->stackedWidget->setCurrentIndex(1);
    qDebug() << "Current stackedWidget index = " << ui->stackedWidget->currentIndex() << "\n";
}

void MainWindow::controller()
{
    /////////////////////////////////////////////////////////
    /// Msg Box (input validation)
    /////////////////////////////////////////////////////////
    const auto msg_box = [this](const bool &status) -> bool {
            QMessageBox reply;
            switch(ui->stackedWidget->currentIndex())
            {
            case 0:
                reply.setIcon(QMessageBox::Warning);
                reply.setWindowTitle("Invalid PO Number Warning");
                reply.setText("PO number is less than 8 digits or is invalid\nDo you want to continue?");
                reply.setStandardButtons(QMessageBox::Yes);
                reply.addButton(QMessageBox::No);
                reply.setDefaultButton(QMessageBox::No);
                break;
            case 1:
                // MessageBox
                reply.setIcon(QMessageBox::Warning);
                reply.setWindowTitle("Invalid Order Number Warning");
                reply.setText("Order number is invalid\nDo you want to continue?");
                reply.setStandardButtons(QMessageBox::Yes);
                reply.addButton(QMessageBox::No);
                reply.setDefaultButton(QMessageBox::No);
                break;
            }

            if(status == false)
            {
                if(reply.exec() == QMessageBox::Yes)
                    { return true; }
                else {
                    return false;
                }
            }
            else
            {
                return true;
            }};

    switch(ui->stackedWidget->currentIndex())
    {
    case 0:
        if(msg_box(po_val()) && msg_box(name_val(ui->name_input)))
        {
            qDebug() << "[+] Valid input";
            print_file();
        }
        else {
            qDebug() << "[x] Invalid input";
        }
        break;
    case 1:
        if(msg_box(order_num_val()) && msg_box(name_val(ui->name_input2)))
        {
            qDebug() << "[+] Valid input";
            print_file();
        }
        else {
            qDebug() << "[x] Invalid input";
        }
        break;
    }
}


void MainWindow::on_stackedWidget_currentChanged(int arg1)
{
    switch (arg1) {
    case 0:
        ui->menuOrder_Type->setEnabled(false);
        ui->menuSpecial_Order->setChecked(true);
        ui->menuStore_Order->setChecked(false);
        break;
    case 1:
        ui->menuOrder_Type->setEnabled(true);
        ui->menuSpecial_Order->setChecked(false);
        ui->menuStore_Order->setChecked(true);
        break;
    }
}

void MainWindow::on_menuSpecial_Order_triggered(bool checked)
{
    if(checked){
        ui->stackedWidget->setCurrentIndex(0);
    }
}

void MainWindow::on_menuStore_Order_triggered(bool checked)
{
    if(checked){
        ui->stackedWidget->setCurrentIndex(1);
    }
}

void MainWindow::on_actionSet_Store_Number_triggered()
{
    conf_dialog->setModal(true);
    conf_dialog->exec();

    std::unique_ptr<QMessageBox> msg(new QMessageBox);
    msg->setIcon(QMessageBox::Warning);
    msg->setWindowTitle("Store Number Changed");
    msg->setText("Application needs to be restarted for settings to be applied.\nRestart now?");
    msg->setStandardButtons(QMessageBox::Yes);
    msg->setDefaultButton(QMessageBox::Yes);
    msg->addButton(QMessageBox::No);

    if(msg->exec() == QMessageBox::Yes){
        QCoreApplication::quit();
    }
    if(msg->exec() == QMessageBox::No){
        msg->close();
    }
}

void MainWindow::on_actionPO_Number_placeholder_text_toggled(bool arg1)
{
    qDebug() << "STATUS: " << arg1;
    if(arg1){
        ui->po_input->setPlaceholderText(po_id);
        ui->po_input->setText(po_id);
        cfg_file->create_file(cfg_file->store_number().toStdString(), po_id.toStdString(), arg1, ui->actionStore_Order_Number_Placeholder_Text->isChecked());
    }
}

void MainWindow::on_actionStore_Order_Number_Placeholder_Text_toggled(bool arg1)
{
    qDebug() << "STATUS: " << arg1;
    if(arg1){
        ui->order_num->setPlaceholderText(store_id+"-");
        ui->order_num->setText(store_id+"-");
        cfg_file->create_file(cfg_file->store_number().toStdString(), po_id.toStdString(), ui->actionStore_Order_Number_Placeholder_Text->isChecked(), arg1);
    }
}

void MainWindow::set_default()
{
    ui->actionStore_Order_Number_Placeholder_Text->setChecked(true);
}
