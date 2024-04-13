/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *sudoku_base;
    QPushButton *startBtn;
    QPushButton *quitBtn;
    QFrame *line;
    QPushButton *resetBtn;
    QLabel *Label;
    QLabel *stateLabel;
    QPushButton *returnBtn;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(1300, 900);
        MainWindow->setMinimumSize(QSize(1300, 900));
        MainWindow->setMaximumSize(QSize(1300, 6666666));
        MainWindow->setAcceptDrops(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/sudoku_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	/*font: 15pt \"Microsoft YaHei UI\";*/\n"
"}"));
        MainWindow->setAnimated(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#centralwidget {\n"
"	background-color:rgb(248, 255, 253)\n"
"}"));
        sudoku_base = new QLabel(centralwidget);
        sudoku_base->setObjectName("sudoku_base");
        sudoku_base->setGeometry(QRect(0, 0, 1000, 900));
        sudoku_base->setMinimumSize(QSize(1000, 900));
        sudoku_base->setPixmap(QPixmap(QString::fromUtf8(":/sudoku_map.png")));
        sudoku_base->setTextInteractionFlags(Qt::NoTextInteraction);
        startBtn = new QPushButton(centralwidget);
        startBtn->setObjectName("startBtn");
        startBtn->setGeometry(QRect(1060, 130, 121, 41));
        startBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	/*background-color:rgb(255, 236, 233)\n"
"}"));
        startBtn->setAutoDefault(false);
        startBtn->setFlat(false);
        quitBtn = new QPushButton(centralwidget);
        quitBtn->setObjectName("quitBtn");
        quitBtn->setGeometry(QRect(1060, 620, 121, 41));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(890, 0, 20, 881));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(2);
        line->setFrameShape(QFrame::VLine);
        resetBtn = new QPushButton(centralwidget);
        resetBtn->setObjectName("resetBtn");
        resetBtn->setGeometry(QRect(1060, 210, 121, 41));
        Label = new QLabel(centralwidget);
        Label->setObjectName("Label");
        Label->setGeometry(QRect(960, 380, 321, 81));
        QFont font;
        font.setPointSize(12);
        Label->setFont(font);
        Label->setAlignment(Qt::AlignCenter);
        Label->setWordWrap(true);
        stateLabel = new QLabel(centralwidget);
        stateLabel->setObjectName("stateLabel");
        stateLabel->setGeometry(QRect(960, 490, 321, 91));
        stateLabel->setFont(font);
        stateLabel->setAlignment(Qt::AlignCenter);
        returnBtn = new QPushButton(centralwidget);
        returnBtn->setObjectName("returnBtn");
        returnBtn->setGeometry(QRect(1060, 290, 121, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1300, 17));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);
        QObject::connect(quitBtn, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        startBtn->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\247\243\346\225\260\347\213\254", nullptr));
        sudoku_base->setText(QString());
        startBtn->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
        quitBtn->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        resetBtn->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        Label->setText(QCoreApplication::translate("MainWindow", "\350\257\267\347\202\271\345\207\273\346\240\274\345\255\220\350\276\223\345\205\245\351\242\230\347\233\256\n"
"\347\202\271\345\207\273\342\200\234\345\274\200\345\247\213\342\200\235\346\230\276\347\244\272\347\273\223\346\236\234\n"
"\347\202\271\345\207\273\342\200\234\351\207\215\347\275\256\342\200\235\346\270\205\347\251\272\346\240\274\345\255\220", nullptr));
        stateLabel->setText(QString());
        returnBtn->setText(QCoreApplication::translate("MainWindow", "\351\207\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
