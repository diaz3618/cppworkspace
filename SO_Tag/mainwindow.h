#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void create_file();

private:
    Ui::MainWindow *ui;

    QString customer;
    QString po;
    QString pickup_date;

public slots:
    void print_file();
};

#endif // MAINWINDOW_H
