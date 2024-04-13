#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "selectdialog.h"

#include <QDialog>
#include <QDebug>
#include <QFont>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QSignalMapper *bArrMapper = new QSignalMapper;

    for(int i = 0; i < 81; i++){
        btnArray[i] = new QPushButton(this);
        btnArray[i]->resize(100, 100);
        btnArray[i]->move(i % 9 * 100, i / 9 * 100);
        btnArray[i]->setFlat(true);
        btnArray[i]->setStyleSheet(tr("QPushButton {\n	font: 25pt 'Microsoft YaHei UI';\n}\n"
                                      "QPushButton::disabled{color:black}"));
        //使用了 QSignalMapper 来对多个部件进行操控
        connect(btnArray[i], SIGNAL(clicked(bool)), bArrMapper, SLOT(map()));
        bArrMapper->setMapping(btnArray[i], i);
    }
    connect(bArrMapper, SIGNAL(mappedInt(int)), this, SLOT(clicked_PushButton(int)));

    ui->stateLabel->setText(tr("请点击格子输入数独题目"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::sudokuDebug(){
    for(int i = 0; i < 9; i++){
        qDebug()<<sudoku[i * 9 + 0]<<' '
                 <<sudoku[i * 9 + 1]<<' '
                 <<sudoku[i * 9 + 2]<<' '
                 <<sudoku[i * 9 + 3]<<' '
                 <<sudoku[i * 9 + 4]<<' '
                 <<sudoku[i * 9 + 5]<<' '
                 <<sudoku[i * 9 + 6]<<' '
                 <<sudoku[i * 9 + 7]<<' '
                 <<sudoku[i * 9 + 8]<<' ';
    }
    qDebug()<<Qt::endl;
}

//以下是解数独的算法

// 检测数独是否满足要求
bool MainWindow::check_sudoku(int* s, int n){

    // 定位所在格的行、列
    int row = n / 9;
    int col = n % 9;

    // 定位所在的九宫格
    int row_9 = row / 3;
    int col_9 = col / 3;

    int i;

    // 判断行内是否有重复数字
    for(i = 0; i < 9; i++){
        if(row * 9 + i == n) continue;
        if(s[row * 9 + i] == s[n]) return false;
    }

    // 判断列内是否有重复数字
    for(i = 0; i < 9; i++){
        if(col + i * 9 == n) continue;
        if(s[col + i * 9] == s[n]) return false;
    }

    // 判断九宫格内是否有重复数字
    for(i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if((row_9 * 3 + i) * 9 + col_9 * 3 + j == n) continue;
            if(s[(row_9 * 3 + i) * 9 + col_9 * 3 + j] == s[n]) return false;
        }
    }

    // 通过检测，返回true
    return true;
}



// 解决数独方法实现
// 使用递归算法
bool MainWindow::solve_sudoku(int *s, int n, int* temp){
    int i;

    // 最后一格
    if(n == 80){
        if(!temp[n]) return true;
        for(i = 1; i <= 9; i++){

            s[n] = i;

            if(!check_sudoku(s, n)) continue;
            break;
        }

        if(i <= 9) return true;
        s[n] = 0;
        return false;
    }

    // 常规判定
    if(!temp[n]) return solve_sudoku(s, n + 1, temp);

    for(i = 1; i <= 9; i++){

        s[n] = i;

        if(!check_sudoku(s, n)) continue;

        if(!solve_sudoku(s, n + 1, temp)) continue;

        break;
    }

    if(i <= 9) return true;
    s[n] = 0;
    return false;
}


//以下是 pushButton 部件的实现

void MainWindow::clicked_PushButton(int i)
{
    selectDialog *d = new selectDialog(this);
    d->exec();
    int num = d->num;
    QString ans;
    if(num <= 9 && num >= 1) ans = QString::number(num);
    else ans = tr("");
    btnArray[i]->setText(ans);
    sudoku[i] = num;
}



void MainWindow::on_startBtn_clicked()
{
    int i;
    for(i = 0; i < 81; i++){
        temp[i] = !sudoku[i];
    }

    bool mark;

    for(i = 0; i < 81; i++){
        if(!temp[i]){
            if(!check_sudoku(sudoku, i)){
                mark = false;
                break;
            }
        }
        mark = true;
    }
    if(mark) mark = solve_sudoku(sudoku, 0, temp);

    //接下来写成功得到结果时的输出，和失败后的警告窗口

    if(mark){
        QString ans;
        for(int i = 0; i < 81; i++){
            btnArray[i]->setEnabled(false);
            if(temp[i]){
                ans = QString::number(sudoku[i]);
                btnArray[i]->setStyleSheet(tr("QPushButton {\n	font: 25pt 'Microsoft YaHei UI';\n color:rgb(255, 70, 100)}\n"));
                btnArray[i]->setText(ans);
            }
        }
        ui->stateLabel->setText(tr("输出结果成功\n\n请点击“重置”按钮清空界面"));
    }
    else {
        ui->stateLabel->setText(tr("输出结果失败\n\n请点击“重置按钮清空界面"));
        int m = QMessageBox::warning(this, tr("警告"), tr("该数独无法解出答案"), QMessageBox::Ok);

        qDebug()<<m;
    }
}




void MainWindow::on_resetBtn_clicked()
{
    for(int i = 0; i < 81; i++){
        btnArray[i]->setText(tr(""));
        btnArray[i]->setStyleSheet(tr("QPushButton {\n	font: 25pt 'Microsoft YaHei UI';\n}\n"
                                      "QPushButton::disabled{color:black}"));
        sudoku[i] = 0;
        btnArray[i]->setEnabled(true);
        temp[i] = 0;
    }
    ui->stateLabel->setText(tr("请点击格子输入数独题目"));
}


void MainWindow::on_returnBtn_clicked()
{
    for(int i = 0; i < 81; i++){
        if(temp[i]){
        btnArray[i]->setText(tr(""));
        btnArray[i]->setStyleSheet(tr("QPushButton {\n	font: 25pt 'Microsoft YaHei UI';\n}\n"
                                      "QPushButton::disabled{color:black}"));
        sudoku[i] = 0;
        btnArray[i]->setEnabled(true);
        }
    }
    ui->stateLabel->setText(tr("请点击格子输入数独题目"));
}

