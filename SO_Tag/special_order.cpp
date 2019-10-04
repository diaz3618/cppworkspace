#include "mainwindow.h"
#include "ui_mainwindow.h"

bool MainWindow::po_val() const
{
    const std::string &po_type = po_id.toStdString();
    const std::string &filtered_input = ui->po_input->text().toStdString().substr(0, 3);

    std::unordered_map<std::string, std::string> smap { {po_type, filtered_input} };

    smap.begin()->first == smap.begin()->second ? qDebug() << "[po_val]Valid Input" : qDebug() << "[po_val]Invalid Input";
    return smap.begin()->first == smap.begin()->second ? true : false;
}
