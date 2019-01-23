#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //创建新的动作
    QAction* openAction = new QAction(tr("&open"),this);

    //添加图标
    QIcon icon(":/myimg/005.PNG");
    openAction->setIcon(icon);

    //设置快捷键
    openAction ->setShortcut(QKeySequence(tr("Ctrl+O")));

    //在文件中设置新的打开动作
    ui->menu->addAction(openAction);

    //创建新的编辑菜单
    QMenu* menu_E = ui->menuBar->addMenu(tr("编辑(&E)"));
    QAction* findAction = new QAction(tr("&Find"),this);
    QIcon icon2(":/myimg/005.PNG");
    findAction->setIcon(icon2);
    findAction->setShortcut(QKeySequence(tr("Ctrl+F")));
    menu_E->addAction(findAction);
}

MainWindow::~MainWindow()
{
    delete ui;
}
