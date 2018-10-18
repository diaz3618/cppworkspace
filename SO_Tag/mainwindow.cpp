#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <Windows.h>
#include <WinBase.h>
#include <iomanip>
#include <stdlib.h>
#include <iostream>

#include <QtDebug>
#include <QPdfWriter>
#include <QPrinter>
#include <QPainter>
#include <ctime>

#define FILENAME "tag.pdf"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->print_button, &QPushButton::clicked, this, &MainWindow::print_file);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Outputs today's date
QString today()
{
  time_t rawtime;
  struct tm * timeinfo;
  char buffer[80];

  time (&rawtime);
  timeinfo = localtime(&rawtime);

  strftime(buffer,sizeof(buffer),"%m/%d/%Y",timeinfo);
  QString str(buffer);

  return str;
}

// Creates PDF File (special order tag)
void MainWindow::create_file()
{

    customer = ui->name_input->text();
    po = ui->po_input->text();

    if(ui->checkBox->isChecked())
    {
        received_date = today();
    }
    else
    {
        received_date = ui->date_input->text();
    }

    qDebug() << customer.toUpper() << "\n" << po << "\n" << received_date;

    /*============================================================================*/

    QPdfWriter writer(FILENAME);
    writer.setPageSize(QPagedPaintDevice::A4);
    writer.setPageOrientation(QPageLayout::Landscape);
    writer.setPageMargins(QMargins(30, 30, 30, 30));

    QPainter painter(&writer);
    painter.setPen(Qt::black);
    painter.setFont(QFont("Calibri", 110));

    QRect r = painter.viewport();

    QString tag = customer.toUpper()+"\n"+po+"\n"+received_date;
    painter.drawText(r, Qt::AlignCenter, tag);

    painter.end();
}

/*
 * Sends PDF to default printer.
 * I haven't figured out how to write something
 * that prints the PDF (print to printer). This
 * "method" is temporary (hopefully).
*/
void Print()
{
    std::string file = FILENAME;
    std::string cmd = "printer.exe " + file;

    WinExec(cmd.c_str(), SW_HIDE);
    //system(cmd.c_str());
}


// Creates and prints file
void MainWindow::print_file()
{
    create_file();
    Print();
}

