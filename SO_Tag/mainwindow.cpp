#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iomanip>
#include <QtDebug>
#include <QPdfWriter>
#include <QPrinter>
#include <QPainter>
#include <QtCore>
#include <QtGui>
#include <QApplication>
#include <QPrintDialog>
#include <QFileDialog>
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

void MainWindow::create_file()
{
    customer = ui->customer_input->toPlainText();
    po = ui->po_input->toPlainText();
    pickup_date = ui->pickup_input->toPlainText();

    qDebug() << customer.toUpper() << "\n" << po << "\n" << pickup_date;

    /*============================================================================*/

    QPdfWriter writer(FILENAME);
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

void MainWindow::print_file()
{
    // Work in progress (printing damn file turned out to be a bit of a challenge.
    create_file();

    QPrinter printer(QPrinter::HighResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(FILENAME);
    printer.setPageOrientation(QPageLayout::Landscape);
    QPrintDialog dlg(&printer, this);
    dlg.setWindowTitle("Print");

    if (dlg.exec() == QDialog::Accepted)
    {
        QWidget* widget = new QWidget(this); // this widget is your pdf widget
        QPixmap printPixmap(widget->width(),widget->height());
        widget->render(&printPixmap,QPoint(),QRegion(0,0,widget->width(),widget->height()));
        QPainter painterPixmap(&printer);
        painterPixmap.scale(4,4);
        painterPixmap.drawPixmap(printer.pageRect().topLeft(), printPixmap, printPixmap.rect());
    }
}

