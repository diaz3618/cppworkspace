/********************************************************************************
** Form generated from reading UI file 'author.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHOR_H
#define UI_AUTHOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Author
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QLabel *label_6;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *Author)
    {
        if (Author->objectName().isEmpty())
            Author->setObjectName(QString::fromUtf8("Author"));
        Author->resize(389, 157);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Author->sizePolicy().hasHeightForWidth());
        Author->setSizePolicy(sizePolicy);
        Author->setMinimumSize(QSize(389, 157));
        Author->setMaximumSize(QSize(389, 157));
        verticalLayout_2 = new QVBoxLayout(Author);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_7 = new QLabel(Author);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setMinimumSize(QSize(110, 0));
        label_7->setMaximumSize(QSize(110, 16777215));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/icon100x100.ico")));

        horizontalLayout_2->addWidget(label_7);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Author);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(Author);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_4 = new QLabel(Author);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_3 = new QLabel(Author);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_6 = new QLabel(Author);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(Author);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Author);
        QObject::connect(pushButton, SIGNAL(clicked()), Author, SLOT(close()));

        QMetaObject::connectSlotsByName(Author);
    } // setupUi

    void retranslateUi(QDialog *Author)
    {
        Author->setWindowTitle(QApplication::translate("Author", "Author Information", nullptr));
        label_7->setText(QString());
        label->setText(QApplication::translate("Author", "SO Tag: Special Order Tag v1.2", nullptr));
        label_2->setText(QApplication::translate("Author", "Author: Daniel F. Diaz Santiago  @  September 2018", nullptr));
        label_4->setText(QApplication::translate("Author", "diaz.santiago.3618@gmail.com", nullptr));
        label_3->setText(QApplication::translate("Author", "Copyright (C) 2018", nullptr));
        label_6->setText(QApplication::translate("Author", "GNU GPL v3.0 License", nullptr));
        pushButton->setText(QApplication::translate("Author", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Author: public Ui_Author {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHOR_H
