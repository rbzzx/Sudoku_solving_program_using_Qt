/********************************************************************************
** Form generated from reading UI file 'selectdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTDIALOG_H
#define UI_SELECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_selectDialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label;
    QLabel *label_2;
    QPushButton *resetBtn;
    QLabel *label_3;

    void setupUi(QDialog *selectDialog)
    {
        if (selectDialog->objectName().isEmpty())
            selectDialog->setObjectName("selectDialog");
        selectDialog->resize(284, 179);
        selectDialog->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font:18pt \"Microsoft YaHei UI\" ;\n"
"}"));
        pushButton = new QPushButton(selectDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 60, 60));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(false);
        pushButton->setFont(font);
        pushButton->setFlat(true);
        pushButton_2 = new QPushButton(selectDialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(60, 0, 60, 60));
        pushButton_2->setFont(font);
        pushButton_2->setFlat(true);
        pushButton_3 = new QPushButton(selectDialog);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(120, 0, 60, 60));
        pushButton_3->setFont(font);
        pushButton_3->setFlat(true);
        pushButton_4 = new QPushButton(selectDialog);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 60, 60, 60));
        pushButton_4->setFont(font);
        pushButton_4->setFlat(true);
        pushButton_5 = new QPushButton(selectDialog);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(60, 60, 60, 60));
        pushButton_5->setFont(font);
        pushButton_5->setFlat(true);
        pushButton_6 = new QPushButton(selectDialog);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(120, 60, 60, 60));
        pushButton_6->setFont(font);
        pushButton_6->setFlat(true);
        pushButton_7 = new QPushButton(selectDialog);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(0, 120, 60, 60));
        pushButton_7->setFont(font);
        pushButton_7->setFlat(true);
        pushButton_8 = new QPushButton(selectDialog);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(60, 120, 60, 60));
        pushButton_8->setFont(font);
        pushButton_8->setFlat(true);
        pushButton_9 = new QPushButton(selectDialog);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(120, 120, 60, 60));
        pushButton_9->setFont(font);
        pushButton_9->setFlat(true);
        label = new QLabel(selectDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(179, 0, 105, 141));
        label->setAutoFillBackground(true);
        label->setFrameShape(QFrame::NoFrame);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(selectDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 540, 540));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/sudoku_map.png")));
        label_2->setScaledContents(true);
        resetBtn = new QPushButton(selectDialog);
        resetBtn->setObjectName("resetBtn");
        resetBtn->setGeometry(QRect(192, 120, 80, 31));
        resetBtn->setAutoFillBackground(false);
        resetBtn->setStyleSheet(QString::fromUtf8("QPushButton#resetBtn{\n"
"	font-size:9pt;\n"
"}"));
        label_3 = new QLabel(selectDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(179, 140, 105, 41));
        label_3->setAutoFillBackground(true);
        label_3->setFrameShape(QFrame::NoFrame);
        label_3->setFrameShadow(QFrame::Plain);
        label_2->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        pushButton_9->raise();
        label->raise();
        label_3->raise();
        resetBtn->raise();

        retranslateUi(selectDialog);
        QObject::connect(pushButton, &QPushButton::clicked, selectDialog, qOverload<>(&QDialog::close));
        QObject::connect(pushButton_2, &QPushButton::clicked, selectDialog, qOverload<>(&QDialog::close));
        QObject::connect(pushButton_3, &QPushButton::clicked, selectDialog, qOverload<>(&QDialog::close));
        QObject::connect(pushButton_4, &QPushButton::clicked, selectDialog, qOverload<>(&QDialog::close));
        QObject::connect(pushButton_5, &QPushButton::clicked, selectDialog, qOverload<>(&QDialog::close));
        QObject::connect(pushButton_6, &QPushButton::clicked, selectDialog, qOverload<>(&QDialog::close));
        QObject::connect(pushButton_7, &QPushButton::clicked, selectDialog, qOverload<>(&QDialog::close));
        QObject::connect(pushButton_8, &QPushButton::clicked, selectDialog, qOverload<>(&QDialog::close));
        QObject::connect(pushButton_9, &QPushButton::clicked, selectDialog, qOverload<>(&QDialog::close));
        QObject::connect(resetBtn, &QPushButton::clicked, selectDialog, qOverload<>(&QDialog::close));

        pushButton->setDefault(true);
        pushButton_2->setDefault(true);
        pushButton_3->setDefault(true);
        pushButton_4->setDefault(true);
        pushButton_5->setDefault(true);
        pushButton_6->setDefault(true);
        pushButton_7->setDefault(true);
        pushButton_8->setDefault(true);
        pushButton_9->setDefault(true);


        QMetaObject::connectSlotsByName(selectDialog);
    } // setupUi

    void retranslateUi(QDialog *selectDialog)
    {
        selectDialog->setWindowTitle(QCoreApplication::translate("selectDialog", "\351\200\211\346\213\251\344\270\200\344\270\252\346\225\260", nullptr));
        pushButton->setText(QCoreApplication::translate("selectDialog", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("selectDialog", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("selectDialog", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("selectDialog", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("selectDialog", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("selectDialog", "6", nullptr));
        pushButton_7->setText(QCoreApplication::translate("selectDialog", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("selectDialog", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("selectDialog", "9", nullptr));
        label->setText(QCoreApplication::translate("selectDialog", "\351\200\211\346\213\251\344\270\200\344\270\252\346\225\260", nullptr));
        label_2->setText(QString());
        resetBtn->setText(QCoreApplication::translate("selectDialog", "\346\270\205\351\231\244", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class selectDialog: public Ui_selectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTDIALOG_H
