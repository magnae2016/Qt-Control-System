#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QVBoxLayout;
class QHBoxLayout;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setQToolBarQToolButton(int loop);
    void setCustomQToolBar1();
    void setCustomQToolBar2();
    void createQToolButton(QHBoxLayout*);
    void createQLabelQSpinBox(QVBoxLayout*);
    void createQRadioButton(QVBoxLayout*);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
