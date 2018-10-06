#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iomanip>
#include <QtDebug>
#include <QPdfWriter>
#include <QPrinter>
#include <QPainter>

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

void MainWindow::print_file()
{
    QPdfWriter pdf_file("temp_file.pdf");
    //QPainter painter(&pdf_file);

    customer = ui->customer_input->toPlainText();
    po = ui->po_input->toPlainText();
    pickup_date = ui->pickup_input->toPlainText();

    qDebug() << customer.toUpper() << "\n" << po << "\n" << pickup_date;

    /*============================================================================*/

    QPdfWriter writer("temp.pdf");
    writer.setPageSize(QPagedPaintDevice::A4);
    writer.setPageOrientation(QPageLayout::Landscape);
    writer.setPageMargins(QMargins(30, 30, 30, 30));

    QPainter painter(&writer);
    painter.setPen(Qt::black);
    painter.setFont(QFont("Calibri", 100));

    QRect r = painter.viewport();

    QString tag = customer.toUpper()+"\n"+po+"\n"+pickup_date;
    painter.drawText(r, Qt::AlignCenter, tag);
    /*
    painter.drawText(r, Qt::AlignCenter, customer.toUpper());
    painter.drawText(r, Qt::AlignCenter, po);
    painter.drawText(r, Qt::AlignCenter, pickup_date);
    */
    painter.end();
}

