#include "config_file.h"
#include "ui_config_file.h"

Config_File::Config_File(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Config_File)
{
    ui->setupUi(this);
    ui->store_num->setValidator(new QIntValidator(0, 9999, this));
}

Config_File::~Config_File()
{
    delete ui;
}

void Config_File::on_save_button_clicked()
{
    QMessageBox no_input;
    no_input.setIcon(QMessageBox::Critical);
    no_input.setWindowTitle("Invalid input");
    no_input.setText("Invalid store number and/or PO Number");
    no_input.setStandardButtons(QMessageBox::Retry);

    const auto qstos = [](QString qs) -> std::string {
        return qs.toStdString();
    };

    if(ui->store_num->text().size() >= 4 /* && ui->po_num->text().size() >= 3 */) {
        Configure().create_file(qstos(ui->store_num->text()));
        Config_File::close();
    }
    else{
        no_input.exec();
    }
}
