/*
 * Menus are a work in progress
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Dialogs/config_file.h>
#include <Dialogs/author.h>

#include <Windows.h>
#include <WinBase.h>
#include <iomanip>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <unordered_map>
#include <memory>
#include <stdio.h>

#include <QtDebug>
#include <QPdfWriter>
#include <QPrinter>
#include <QPainter>
#include <QDate>
#include <QMessageBox>
#include <QKeyEvent>
#include <QLineEdit>

//#include "csv_file.h"
#include "Config/md5_wrapper.h"
#include "Config/global_variables.h"
#include "Config/config.h"

#define FILENAME "tag.pdf"
#define VERSION "1.2"   //As of 07/25/2019

struct Tag {
    const std::string name, po;
    const int year, month, day;
    Tag(std::string Name, std::string Po, int Year, int Month, int Day) :
        name(Name), po(Po), year(Year), month(Month), day(Day) {}
};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    /*
    std::shared_ptr<Config_File> conf_dialog(Config_File);
    std::unique_ptr<Author> author(Author);
    std::unique_ptr<Configure> cfg_file(Configure);
    */
    Config_File *conf_dialog    = new Config_File;
    Author      *author         = new Author;
    Configure   *cfg_file       = new Configure;
    md5wrapper  *md5            = new md5wrapper;
    const std::string printer_hash = "1e47ad46ba3bcca1f8f022fcdfa5480b";


    //const std::string CSVFILE = "recent.csv";   // csv file name (UNUSED FOR NOW)

    //const tag_map tags = csv::file(CSVFILE).read();   // (UNUSED FOR NOW)
    const QString po_id     = cfg_file->po_number();
    const QString store_id  = "H" + cfg_file->store_number();
    QString store_order_type;



    bool po_val() const;      // special_order.cpp
    bool order_num_val() const; // store_order.cpp
    bool name_val(QLineEdit *txt) const;      // mainwindow.cpp
    void create_file();         // mainwindow.cpp

    QString po;

protected:
    void keyPressEvent(QKeyEvent *key); // mainwindow.cpp

public slots:
    void print_file();  // mainwindow.cpp
    void controller();

private slots:
    void set_default();
    void on_actionSpecial_Order_triggered();    // mainwindow.cpp
    void on_actionStore_Order_triggered();      // mainwindow.cpp
    void on_stackedWidget_currentChanged(int arg1);
    void on_menuSpecial_Order_triggered(bool checked);
    void on_menuStore_Order_triggered(bool checked);
    void on_actionSet_Store_Number_triggered();
    void on_actionPO_Number_placeholder_text_toggled(bool arg1);
    void on_actionStore_Order_Number_Placeholder_Text_toggled(bool arg1);
    void on_actionDelivery_Box_toggled(bool arg1);
    void on_actionDelivery_Flat_toggled(bool arg1);
    void on_actionWill_Call_toggled(bool arg1);
    void on_actionBOPIS_toggled(bool arg1);
    void on_actionTransfer_toggled(bool arg1);
};

#endif // MAINWINDOW_H
