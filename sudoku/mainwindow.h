#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QSignalMapper>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void sudokuDebug();
    bool check_sudoku(int* , int );
    bool solve_sudoku(int* , int , int* );

    int sudoku[81] = {0};
    QPushButton *btnArray[81];
    int indexArray = 0;

public slots:


private slots:
    void clicked_PushButton(int i);

    void on_startBtn_clicked();

    void on_resetBtn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
