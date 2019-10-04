/********************************************************************************
** Form generated from reading UI file 'config_file.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIG_FILE_H
#define UI_CONFIG_FILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Config_File
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *store_num;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *save_button;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *Config_File)
    {
        if (Config_File->objectName().isEmpty())
            Config_File->setObjectName(QString::fromUtf8("Config_File"));
        Config_File->resize(242, 78);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Config_File->sizePolicy().hasHeightForWidth());
        Config_File->setSizePolicy(sizePolicy);
        Config_File->setMinimumSize(QSize(242, 0));
        Config_File->setMaximumSize(QSize(242, 99));
        Config_File->setContextMenuPolicy(Qt::NoContextMenu);
        Config_File->setToolTipDuration(2);
#ifndef QT_NO_STATUSTIP
        Config_File->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        Config_File->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        Config_File->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        Config_File->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY
        verticalLayout = new QVBoxLayout(Config_File);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Config_File);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        store_num = new QLineEdit(Config_File);
        store_num->setObjectName(QString::fromUtf8("store_num"));
        sizePolicy.setHeightForWidth(store_num->sizePolicy().hasHeightForWidth());
        store_num->setSizePolicy(sizePolicy);
        store_num->setMinimumSize(QSize(140, 0));
        store_num->setMaximumSize(QSize(140, 16777215));

        horizontalLayout->addWidget(store_num);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        save_button = new QPushButton(Config_File);
        save_button->setObjectName(QString::fromUtf8("save_button"));
        save_button->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(save_button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Config_File);

        QMetaObject::connectSlotsByName(Config_File);
    } // setupUi

    void retranslateUi(QDialog *Config_File)
    {
        Config_File->setWindowTitle(QApplication::translate("Config_File", "Config. File Not Found", nullptr));
#ifndef QT_NO_TOOLTIP
        Config_File->setToolTip(QApplication::translate("Config_File", "Configuration file is not found or formated wrong.", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("Config_File", "Store Number:", nullptr));
        store_num->setPlaceholderText(QApplication::translate("Config_File", "e.g. 0270", nullptr));
        save_button->setText(QApplication::translate("Config_File", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Config_File: public Ui_Config_File {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_FILE_H
