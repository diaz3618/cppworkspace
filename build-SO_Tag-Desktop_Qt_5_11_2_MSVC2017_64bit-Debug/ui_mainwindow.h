/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QPlainTextEdit *customer_input;
    QLabel *label;
    QPlainTextEdit *po_input;
    QLabel *label_3;
    QPlainTextEdit *pickup_input;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *print_button;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(391, 201);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(391, 190));
        MainWindow->setMaximumSize(QSize(391, 220));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        customer_input = new QPlainTextEdit(centralWidget);
        customer_input->setObjectName(QStringLiteral("customer_input"));
        customer_input->setInputMethodHints(Qt::ImhNone);
        customer_input->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        customer_input->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        customer_input->setTabChangesFocus(true);

        verticalLayout_2->addWidget(customer_input);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        po_input = new QPlainTextEdit(centralWidget);
        po_input->setObjectName(QStringLiteral("po_input"));
        po_input->setInputMethodHints(Qt::ImhDigitsOnly|Qt::ImhPreferNumbers);
        po_input->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        po_input->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        po_input->setTabChangesFocus(true);

        verticalLayout_2->addWidget(po_input);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        pickup_input = new QPlainTextEdit(centralWidget);
        pickup_input->setObjectName(QStringLiteral("pickup_input"));
        pickup_input->setInputMethodHints(Qt::ImhNone);
        pickup_input->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pickup_input->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pickup_input->setTabChangesFocus(true);

        verticalLayout_2->addWidget(pickup_input);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        print_button = new QPushButton(centralWidget);
        print_button->setObjectName(QStringLiteral("print_button"));

        horizontalLayout->addWidget(print_button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SO Tag", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Customer name", nullptr));
        label->setText(QApplication::translate("MainWindow", "PO number", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Pick-up date", nullptr));
        print_button->setText(QApplication::translate("MainWindow", "Print", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
