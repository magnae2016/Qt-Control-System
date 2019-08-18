#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextEdit>
#include <QVBoxLayout>
#include <QPushButton>
#include <QToolButton>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QSpinBox>
#include <QRadioButton>
#include <QTabBar>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    QMainWindow::showMaximized();

    setQToolBarQToolButton(3);
    ui->mainToolBar->addSeparator();
    setCustomQToolBar1();
    ui->mainToolBar->addSeparator();
    setQToolBarQToolButton(2);
    ui->mainToolBar->addSeparator();
    setCustomQToolBar2();
    ui->mainToolBar->addSeparator();
    setQToolBarQToolButton(1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setQToolBarQToolButton(int loop)
{
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;

    widget = new QWidget();
    verticalLayout = new QVBoxLayout();
    verticalLayout->setContentsMargins(0, 0, 0, 0);
    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setContentsMargins(0, 0, 0, 0);

    for (int i = 0; i < loop; i++) {
        createQToolButton(horizontalLayout);
    }

    verticalLayout->addLayout(horizontalLayout);

    label = new QLabel();
    label->setText("QToolBar");
    label->setAlignment(Qt::AlignHCenter);

    verticalLayout->addWidget(label);

    widget->setLayout(verticalLayout);
    ui->mainToolBar->addWidget(widget);

}

void MainWindow::setCustomQToolBar1()
{
    QWidget *widget;
    QWidget *widget_2;
    QWidget *widget_3;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QIcon icon;

    widget = new QWidget();
    verticalLayout = new QVBoxLayout();
    verticalLayout->setContentsMargins(0, 0, 0, 0);
    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setContentsMargins(0, 0, 0, 0);

    createQToolButton(horizontalLayout);

    widget_2 = new QWidget();
    verticalLayout_2 = new QVBoxLayout(widget_2);
    verticalLayout_2->setContentsMargins(0, 0, 0, 0);

    toolButton_2 = new QToolButton(widget_2);
    icon.addFile(QString::fromUtf8(":/res/icons8-full-image-40.png"), QSize(), QIcon::Normal, QIcon::Off);
    toolButton_2->setIcon(icon);
    toolButton_2->setIconSize(QSize(20, 20));
    toolButton_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    toolButton_2->setAutoRaise(true);
    toolButton_2->setText("QAction5");
    verticalLayout_2->addWidget(toolButton_2);

    toolButton_3 = new QToolButton(widget_2);
    toolButton_3->setIcon(icon);
    toolButton_3->setIconSize(QSize(20, 20));
    toolButton_3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    toolButton_3->setAutoRaise(true);
    toolButton_3->setText("QAction6");
    verticalLayout_2->addWidget(toolButton_3);

    widget_2->setLayout(verticalLayout_2);
    horizontalLayout->addWidget(widget_2);

    widget_3 = new QWidget();
    verticalLayout_3 = new QVBoxLayout(widget_3);
    verticalLayout_3->setContentsMargins(0, 0, 10, 0);
    verticalLayout_3->setSpacing(3);

    label_2 = new QLabel(widget_3);
    label_2->setText("QLabel");
    verticalLayout_3->addWidget(label_2);

    createQLabelQSpinBox(verticalLayout_3);
    createQLabelQSpinBox(verticalLayout_3);

    widget_3->setLayout(verticalLayout_3);
    horizontalLayout->addWidget(widget_3);

    widget_4 = new QWidget();
    verticalLayout_4 = new QVBoxLayout(widget_4);
    verticalLayout_4->setContentsMargins(0, 0, 10, 0);
    verticalLayout_4->setSpacing(3);

    label_3 = new QLabel(widget_4);
    label_3->setText("QLabel");
    verticalLayout_4->addWidget(label_3);

    createQLabelQSpinBox(verticalLayout_4);

    toolButton_4 = new QToolButton(widget_4);
    icon.addFile(QString::fromUtf8(":/res/icons8-full-image-40.png"), QSize(), QIcon::Normal, QIcon::Off);
    toolButton_4->setIcon(icon);
    toolButton_4->setIconSize(QSize(20, 20));
    toolButton_4->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    toolButton_4->setAutoRaise(false);
    toolButton_4->setText("QAction7");
    toolButton_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    verticalLayout_4->addWidget(toolButton_4);

    widget_4->setLayout(verticalLayout_4);
    horizontalLayout->addWidget(widget_4);
    verticalLayout->addLayout(horizontalLayout);

    label = new QLabel();
    label->setText("QToolBar2");
    label->setAlignment(Qt::AlignHCenter);

    verticalLayout->addWidget(label);

    widget->setLayout(verticalLayout);
    ui->mainToolBar->addWidget(widget);

}

void MainWindow::setCustomQToolBar2()
{
    QWidget *widget;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QIcon icon;

    widget = new QWidget();
    verticalLayout = new QVBoxLayout();
    verticalLayout->setContentsMargins(0, 0, 0, 0);
    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setContentsMargins(0, 0, 0, 0);

    createQToolButton(horizontalLayout);

    widget_3 = new QWidget();
    verticalLayout_3 = new QVBoxLayout(widget_3);
    verticalLayout_3->setContentsMargins(0, 0, 0, 0);

    label_2 = new QLabel();
    label_2->setText("QLabel");
    label_2->setContentsMargins(0, 0, 0, 0);
    verticalLayout_3->addWidget(label_2);

    createQRadioButton(verticalLayout_3);
    createQRadioButton(verticalLayout_3);

    widget_3->setLayout(verticalLayout_3);
    horizontalLayout->addWidget(widget_3);

    verticalLayout->addLayout(horizontalLayout);

    label = new QLabel();
    label->setText("QToolBar");
    label->setAlignment(Qt::AlignHCenter);

    verticalLayout->addWidget(label);

    widget->setLayout(verticalLayout);
    ui->mainToolBar->addWidget(widget);

}

void MainWindow::createQToolButton(QHBoxLayout * horizontalLayout)
{
    QToolButton *toolButton;
    QIcon icon;

    toolButton = new QToolButton();
    icon.addFile(QString::fromUtf8(":/res/icons8-full-image-40.png"), QSize(), QIcon::Normal, QIcon::Off);
    toolButton->setIcon(icon);
    toolButton->setIconSize(QSize(48, 48));
    toolButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    toolButton->setText("QToolButton");
    toolButton->setAutoRaise(true);

    horizontalLayout->addWidget(toolButton);
}

void MainWindow::createQLabelQSpinBox(QVBoxLayout* verticalLayout)
{
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox;

    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
    horizontalLayout->setContentsMargins(0, 0, 0, 0);
    label = new QLabel();
    label->setText("QLabel");

    horizontalLayout->addWidget(label);

    spinBox = new QSpinBox();
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
    spinBox->setSizePolicy(sizePolicy);
    spinBox->setFixedWidth(90);

    horizontalLayout->addWidget(spinBox);
    verticalLayout->addLayout(horizontalLayout);
}

void MainWindow::createQRadioButton(QVBoxLayout * verticalLayout)
{
    QRadioButton *radioButton;

    radioButton = new QRadioButton();
    radioButton->setText("RadioButton");

    verticalLayout->addWidget(radioButton);
}
