/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSpecial_Order;
    QAction *actionStore_Order;
    QAction *menuSpecial_Order;
    QAction *menuStore_Order;
    QAction *actionPO_Number_placeholder_text;
    QAction *actionStore_Order_Number_Placeholder_Text;
    QAction *actionDelivery_Box;
    QAction *actionDelivery_Flat;
    QAction *actionWill_Call;
    QAction *actionBOPIS;
    QAction *actionTransfer;
    QAction *actionSet_Store_Number;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *SpecialOrder;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *NameLayout1;
    QLabel *label_2;
    QLineEdit *name_input;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *PONumLayout;
    QLabel *label;
    QLineEdit *po_input;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *DateLayout1;
    QSplitter *splitter;
    QLabel *label_3;
    QCheckBox *today_checkbox;
    QDateEdit *date_input;
    QSpacerItem *verticalSpacer_3;
    QWidget *StoreOrder;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *NameLayout2;
    QLabel *label_5;
    QLineEdit *name_input2;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *OrderNumLayout;
    QLabel *label_4;
    QLineEdit *order_num;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *DateLayout2;
    QLabel *label_6;
    QDateEdit *pickup_date;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *ActionButtonsLayout2;
    QToolButton *toolButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *print_button;
    QSpacerItem *horizontalSpacer_4;
    QMenuBar *menuBar;
    QMenu *menuTag_Type;
    QMenu *menuSettings;
    QMenu *menuOrder_Type;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(391, 162);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(391, 162));
        MainWindow->setMaximumSize(QSize(391, 162));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionSpecial_Order = new QAction(MainWindow);
        actionSpecial_Order->setObjectName(QString::fromUtf8("actionSpecial_Order"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/so_tag.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSpecial_Order->setIcon(icon1);
        actionStore_Order = new QAction(MainWindow);
        actionStore_Order->setObjectName(QString::fromUtf8("actionStore_Order"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/storeorder_tag.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionStore_Order->setIcon(icon2);
        menuSpecial_Order = new QAction(MainWindow);
        menuSpecial_Order->setObjectName(QString::fromUtf8("menuSpecial_Order"));
        menuSpecial_Order->setCheckable(true);
        menuStore_Order = new QAction(MainWindow);
        menuStore_Order->setObjectName(QString::fromUtf8("menuStore_Order"));
        menuStore_Order->setCheckable(true);
        actionPO_Number_placeholder_text = new QAction(MainWindow);
        actionPO_Number_placeholder_text->setObjectName(QString::fromUtf8("actionPO_Number_placeholder_text"));
        actionPO_Number_placeholder_text->setCheckable(true);
        actionPO_Number_placeholder_text->setChecked(false);
        actionStore_Order_Number_Placeholder_Text = new QAction(MainWindow);
        actionStore_Order_Number_Placeholder_Text->setObjectName(QString::fromUtf8("actionStore_Order_Number_Placeholder_Text"));
        actionStore_Order_Number_Placeholder_Text->setCheckable(true);
        actionDelivery_Box = new QAction(MainWindow);
        actionDelivery_Box->setObjectName(QString::fromUtf8("actionDelivery_Box"));
        actionDelivery_Box->setCheckable(true);
        actionDelivery_Flat = new QAction(MainWindow);
        actionDelivery_Flat->setObjectName(QString::fromUtf8("actionDelivery_Flat"));
        actionDelivery_Flat->setCheckable(true);
        actionWill_Call = new QAction(MainWindow);
        actionWill_Call->setObjectName(QString::fromUtf8("actionWill_Call"));
        actionWill_Call->setCheckable(true);
        actionBOPIS = new QAction(MainWindow);
        actionBOPIS->setObjectName(QString::fromUtf8("actionBOPIS"));
        actionBOPIS->setCheckable(true);
        actionTransfer = new QAction(MainWindow);
        actionTransfer->setObjectName(QString::fromUtf8("actionTransfer"));
        actionTransfer->setCheckable(true);
        actionSet_Store_Number = new QAction(MainWindow);
        actionSet_Store_Number->setObjectName(QString::fromUtf8("actionSet_Store_Number"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        stackedWidget->setMinimumSize(QSize(388, 0));
        stackedWidget->setMaximumSize(QSize(391, 16777215));
        stackedWidget->setLineWidth(0);
        SpecialOrder = new QWidget();
        SpecialOrder->setObjectName(QString::fromUtf8("SpecialOrder"));
        verticalLayout_2 = new QVBoxLayout(SpecialOrder);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        NameLayout1 = new QHBoxLayout();
        NameLayout1->setSpacing(6);
        NameLayout1->setObjectName(QString::fromUtf8("NameLayout1"));
        label_2 = new QLabel(SpecialOrder);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(75, 20));
        label_2->setMaximumSize(QSize(75, 20));

        NameLayout1->addWidget(label_2);

        name_input = new QLineEdit(SpecialOrder);
        name_input->setObjectName(QString::fromUtf8("name_input"));
        name_input->setMinimumSize(QSize(0, 25));
        name_input->setMaximumSize(QSize(288, 25));
        QFont font;
        font.setPointSize(10);
        name_input->setFont(font);
        name_input->setMaxLength(20);
        name_input->setClearButtonEnabled(false);

        NameLayout1->addWidget(name_input);


        verticalLayout_2->addLayout(NameLayout1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        PONumLayout = new QHBoxLayout();
        PONumLayout->setSpacing(6);
        PONumLayout->setObjectName(QString::fromUtf8("PONumLayout"));
        label = new QLabel(SpecialOrder);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(75, 20));
        label->setMaximumSize(QSize(75, 20));

        PONumLayout->addWidget(label);

        po_input = new QLineEdit(SpecialOrder);
        po_input->setObjectName(QString::fromUtf8("po_input"));
        po_input->setMinimumSize(QSize(0, 25));
        po_input->setMaximumSize(QSize(288, 25));
        po_input->setFont(font);
        po_input->setMaxLength(8);

        PONumLayout->addWidget(po_input);


        verticalLayout_2->addLayout(PONumLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        DateLayout1 = new QHBoxLayout();
        DateLayout1->setSpacing(6);
        DateLayout1->setObjectName(QString::fromUtf8("DateLayout1"));
        splitter = new QSplitter(SpecialOrder);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(splitter);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(70, 16777215));
        splitter->addWidget(label_3);
        today_checkbox = new QCheckBox(splitter);
        today_checkbox->setObjectName(QString::fromUtf8("today_checkbox"));
        today_checkbox->setMaximumSize(QSize(50, 16777215));
        today_checkbox->setChecked(true);
        splitter->addWidget(today_checkbox);
        date_input = new QDateEdit(splitter);
        date_input->setObjectName(QString::fromUtf8("date_input"));
        date_input->setEnabled(false);
        date_input->setMinimumSize(QSize(238, 25));
        date_input->setMaximumSize(QSize(238, 25));
        date_input->setCurrentSection(QDateTimeEdit::DaySection);
        splitter->addWidget(date_input);

        DateLayout1->addWidget(splitter);


        verticalLayout_2->addLayout(DateLayout1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        stackedWidget->addWidget(SpecialOrder);
        StoreOrder = new QWidget();
        StoreOrder->setObjectName(QString::fromUtf8("StoreOrder"));
        verticalLayout_5 = new QVBoxLayout(StoreOrder);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        NameLayout2 = new QHBoxLayout();
        NameLayout2->setSpacing(6);
        NameLayout2->setObjectName(QString::fromUtf8("NameLayout2"));
        label_5 = new QLabel(StoreOrder);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(75, 20));
        label_5->setMaximumSize(QSize(75, 20));

        NameLayout2->addWidget(label_5);

        name_input2 = new QLineEdit(StoreOrder);
        name_input2->setObjectName(QString::fromUtf8("name_input2"));
        name_input2->setMinimumSize(QSize(0, 25));
        name_input2->setMaximumSize(QSize(288, 25));
        name_input2->setFont(font);
        name_input2->setMaxLength(20);
        name_input2->setClearButtonEnabled(false);

        NameLayout2->addWidget(name_input2);


        verticalLayout_5->addLayout(NameLayout2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        OrderNumLayout = new QHBoxLayout();
        OrderNumLayout->setSpacing(6);
        OrderNumLayout->setObjectName(QString::fromUtf8("OrderNumLayout"));
        label_4 = new QLabel(StoreOrder);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(75, 20));
        label_4->setMaximumSize(QSize(75, 20));

        OrderNumLayout->addWidget(label_4);

        order_num = new QLineEdit(StoreOrder);
        order_num->setObjectName(QString::fromUtf8("order_num"));
        order_num->setMinimumSize(QSize(0, 25));
        order_num->setMaximumSize(QSize(288, 25));
        order_num->setFont(font);
        order_num->setMaxLength(8);

        OrderNumLayout->addWidget(order_num);


        verticalLayout_5->addLayout(OrderNumLayout);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);

        DateLayout2 = new QHBoxLayout();
        DateLayout2->setSpacing(6);
        DateLayout2->setObjectName(QString::fromUtf8("DateLayout2"));
        label_6 = new QLabel(StoreOrder);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(75, 20));

        DateLayout2->addWidget(label_6);

        pickup_date = new QDateEdit(StoreOrder);
        pickup_date->setObjectName(QString::fromUtf8("pickup_date"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pickup_date->sizePolicy().hasHeightForWidth());
        pickup_date->setSizePolicy(sizePolicy2);
        pickup_date->setMinimumSize(QSize(238, 25));

        DateLayout2->addWidget(pickup_date);


        verticalLayout_5->addLayout(DateLayout2);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_6);

        stackedWidget->addWidget(StoreOrder);

        verticalLayout->addWidget(stackedWidget);

        ActionButtonsLayout2 = new QHBoxLayout();
        ActionButtonsLayout2->setSpacing(6);
        ActionButtonsLayout2->setObjectName(QString::fromUtf8("ActionButtonsLayout2"));
        ActionButtonsLayout2->setContentsMargins(12, -1, 12, 6);
        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setMinimumSize(QSize(25, 24));
        toolButton->setMaximumSize(QSize(25, 24));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/menu_icon_big.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon3);
        toolButton->setIconSize(QSize(16, 16));
        toolButton->setPopupMode(QToolButton::InstantPopup);
        toolButton->setAutoRaise(true);

        ActionButtonsLayout2->addWidget(toolButton);

        horizontalSpacer_3 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        ActionButtonsLayout2->addItem(horizontalSpacer_3);

        print_button = new QPushButton(centralWidget);
        print_button->setObjectName(QString::fromUtf8("print_button"));
        print_button->setMinimumSize(QSize(90, 0));

        ActionButtonsLayout2->addWidget(print_button);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ActionButtonsLayout2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(ActionButtonsLayout2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 391, 21));
        menuTag_Type = new QMenu(menuBar);
        menuTag_Type->setObjectName(QString::fromUtf8("menuTag_Type"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        menuOrder_Type = new QMenu(menuBar);
        menuOrder_Type->setObjectName(QString::fromUtf8("menuOrder_Type"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuTag_Type->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuOrder_Type->menuAction());
        menuTag_Type->addAction(menuSpecial_Order);
        menuTag_Type->addAction(menuStore_Order);
        menuSettings->addAction(actionPO_Number_placeholder_text);
        menuSettings->addAction(actionStore_Order_Number_Placeholder_Text);
        menuSettings->addAction(actionSet_Store_Number);
        menuOrder_Type->addAction(actionWill_Call);
        menuOrder_Type->addAction(actionDelivery_Box);
        menuOrder_Type->addAction(actionDelivery_Flat);
        menuOrder_Type->addAction(actionBOPIS);
        menuOrder_Type->addAction(actionTransfer);

        retranslateUi(MainWindow);
        QObject::connect(today_checkbox, SIGNAL(toggled(bool)), date_input, SLOT(setDisabled(bool)));

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SO Tag", nullptr));
        actionSpecial_Order->setText(QApplication::translate("MainWindow", "Special Order", nullptr));
        actionStore_Order->setText(QApplication::translate("MainWindow", "Store Order", nullptr));
        menuSpecial_Order->setText(QApplication::translate("MainWindow", "Special Order", nullptr));
        menuStore_Order->setText(QApplication::translate("MainWindow", "Store Order", nullptr));
        actionPO_Number_placeholder_text->setText(QApplication::translate("MainWindow", "PO Number Placeholder Text", nullptr));
        actionStore_Order_Number_Placeholder_Text->setText(QApplication::translate("MainWindow", "Store Order Number Placeholder Text", nullptr));
        actionDelivery_Box->setText(QApplication::translate("MainWindow", "Delivery (Box)", nullptr));
        actionDelivery_Flat->setText(QApplication::translate("MainWindow", "Delivery (Flat)", nullptr));
        actionWill_Call->setText(QApplication::translate("MainWindow", "Will Call", nullptr));
        actionBOPIS->setText(QApplication::translate("MainWindow", "BOPIS", nullptr));
        actionTransfer->setText(QApplication::translate("MainWindow", "Transfer", nullptr));
        actionSet_Store_Number->setText(QApplication::translate("MainWindow", "Set Store Number", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Customer name", nullptr));
        label->setText(QApplication::translate("MainWindow", "PO Number", nullptr));
        po_input->setPlaceholderText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Date received", nullptr));
        today_checkbox->setText(QApplication::translate("MainWindow", "Today", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Customer name", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Order Number", nullptr));
        order_num->setText(QString());
        order_num->setPlaceholderText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Pick-up Date", nullptr));
        toolButton->setText(QApplication::translate("MainWindow", "Tag type", nullptr));
#ifndef QT_NO_TOOLTIP
        print_button->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        print_button->setText(QApplication::translate("MainWindow", "Print", nullptr));
        menuTag_Type->setTitle(QApplication::translate("MainWindow", "Tag Type", nullptr));
        menuSettings->setTitle(QApplication::translate("MainWindow", "Settings", nullptr));
        menuOrder_Type->setTitle(QApplication::translate("MainWindow", "Order Type", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
