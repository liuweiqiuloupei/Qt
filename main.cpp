
#include "mainwindow.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w; //1.0 第一次提交代码
    w.show();
    return a.exec();
}
