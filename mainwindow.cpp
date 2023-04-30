
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QString>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << "第二次提交" << Qt::endl; // 第二次提交
    qDebug() << "第三次提交" << Qt::endl; // 第三次提交
}

MainWindow::~MainWindow()
{
    delete ui;
}


