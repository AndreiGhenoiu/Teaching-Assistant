#include <QtGui/QApplication>
#include "mainwindow.h"
#include "form.h"
#include <QDialog>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
//    QDialog *dialog = new QDialog();
//    //setting size policy for dialog box
//    dialog->width();
//    dialog->exec();
    w.ref = 0;
    w.study = 0;
    w.assign = 0;
    w.show();
    w.fillBox();
    return a.exec();
}
