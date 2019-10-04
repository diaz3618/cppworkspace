#include "mainwindow.h"
#include "ui_mainwindow.h"

bool MainWindow::order_num_val() const
{
    const std::string &order_type = store_id.toStdString();
    const std::string &filtered_input = ui->order_num->text().toStdString().substr(0, 5);

    std::unordered_map<std::string, std::string> smap { {order_type, filtered_input} };

    smap.begin()->first == smap.begin()->second ? qDebug() << "[order_num_val]Valid Input" : qDebug() << "[order_num_val]Invalid Input";
    return smap.begin()->first == smap.begin()->second ? true : false;
}
