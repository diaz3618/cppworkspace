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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *name_input;
    QLabel *label;
    QLineEdit *po_input;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QCheckBox *checkBox;
    QDateEdit *date_input;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *print_button;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(390, 201);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(390, 194));
        MainWindow->setMaximumSize(QSize(391, 201));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_3 = new QHBoxLayout(centralWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        name_input = new QLineEdit(centralWidget);
        name_input->setObjectName(QStringLiteral("name_input"));
        name_input->setMinimumSize(QSize(0, 25));
        QFont font;
        font.setPointSize(10);
        name_input->setFont(font);
        name_input->setMaxLength(20);
        name_input->setClearButtonEnabled(false);

        verticalLayout_2->addWidget(name_input);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        po_input = new QLineEdit(centralWidget);
        po_input->setObjectName(QStringLiteral("po_input"));
        po_input->setMinimumSize(QSize(0, 25));
        po_input->setFont(font);
        po_input->setMaxLength(10);

        verticalLayout_2->addWidget(po_input);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_2->addWidget(label_3);

        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setChecked(true);

        horizontalLayout_2->addWidget(checkBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        date_input = new QDateEdit(centralWidget);
        date_input->setObjectName(QStringLiteral("date_input"));
        date_input->setEnabled(false);
        date_input->setMinimumSize(QSize(0, 25));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        font1.setStrikeOut(false);
        date_input->setFont(font1);
        date_input->setCursor(QCursor(Qt::ArrowCursor));

        verticalLayout_2->addWidget(date_input);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        print_button = new QPushButton(centralWidget);
        print_button->setObjectName(QStringLiteral("print_button"));
        print_button->setMinimumSize(QSize(90, 0));

        horizontalLayout->addWidget(print_button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(checkBox, SIGNAL(toggled(bool)), date_input, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SO Tag", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Customer name", nullptr));
        label->setText(QApplication::translate("MainWindow", "PO number", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Date received", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "Today", nullptr));
        print_button->setText(QApplication::translate("MainWindow", "Print", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
