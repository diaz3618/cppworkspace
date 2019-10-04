#ifndef CONFIG_FILE_H
#define CONFIG_FILE_H

#include <QDialog>
#include <QIntValidator>
#include <QMessageBox>
#include "Config/config.h"

namespace Ui {
class Config_File;
}

class Config_File : public QDialog
{
    Q_OBJECT

public:
    explicit Config_File(QWidget *parent = nullptr);
    ~Config_File();

private slots:
    void on_save_button_clicked();

private:
    Ui::Config_File *ui;
};

#endif // CONFIG_FILE_H
