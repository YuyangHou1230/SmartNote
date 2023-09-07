#include "mainwindow.h"

#include <QApplication>

#include "Common/Helper/framelesswidget.h"
#include "mainform.h"

#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile file(":/style.qss");
    if(file.open(QFile::ReadOnly)){
        QString style = file.readAll();
        file.close();
        a.setStyleSheet(style);
    }

    MainForm w;
    FramelessWidget widget(&w);
    widget.show();


    return a.exec();
}
