#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "form.h"

namespace Ui {
    class MainWindow;
    //class Form;

}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Ui::MainWindow *ui;
    QString getClasses();
    QString getAssign(QString str);
    QString getStudent(QString str);
    QString getClassAssign(QString strin);
    QString getClassStudent(QString strin);
    QString getOnlyClasses();
    QString displayAssign();
    QString getGrades(QString strin, QString str);
    int fillBox();

private slots:
    QString loadData();
    QString loadAssign();
    QString loadStudent();
    int loadMainPage();
    int addStudent();
    int saveData();

    int saveAssign();
    int saveStudents();
    int addAssign();
    int saveClasses();
//    int rmvAssign();
//    int rmvStudent();
    int addClass();
    int listStudents();
    int loadGrades();

protected:
    void changeEvent(QEvent *e);

public:
    int ref;
    int study;
    int assign;
};

#endif // MAINWINDOW_H
