//author: Andrei Ghenoiu

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QXmlStreamReader>
#include <QString>
#include <QStringList>
#include <QInputDialog>
#include <QLabel>
#include <stdio.h>
#include "form.h"
#include "LoadData.h"




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}


//this function loads the data from the xml file and puts it into a QStringList (acts as an array
//of strings), and then gets split and displayed in the table
QString MainWindow::loadData()
{
    QString str;
    str = getClasses();

    QStringList list = str.split(",,");
    //used for testing purposes
    ref = list.length()/5;
    for(int i=5; i<list.length(); i++)
    {
        QTableWidgetItem *qtItem = new QTableWidgetItem(list[i]);

        ui->tableWidget->setItem(0,i-5,qtItem);

    }
    //ui->textEdit->setText(QString::number(list.length()));
    //ui->textEdit_2->setText(QString::number(ref));
    return str;
}

//this method saves the inputed data to the xml file
int MainWindow::saveData()
{
    QString text;
    int i;
    text +="<classes>\n";
    for(i = 0; i<ref; i++)
    {
        if(ui->tableWidget->item(i,0)->text().isEmpty())
        {
            text+="";
        }
        else
        {
             text += "<course name=\""+ui->tableWidget->item(i,0)->text()+"\" id=\"";
             text += ui->tableWidget->item(i,1)->text()+"\" noStudents=\"";
             text += ui->tableWidget->item(i,2)->text()+"\" nextAssignment=\"";
             text += ui->tableWidget->item(i,3)->text()+"\" times=\"";
             text += ui->tableWidget->item(i,4)->text()+"\"/>\n";
         }
    }
    text += "</classes>";
    QFile file("text.xml");
    if(file.open(QFile::WriteOnly))
    {
        QTextStream out(&file);
        out << text;
    }
    file.close();
    return 0;
}

int MainWindow::addClass()
{
    QTableWidgetItem *course_name = new QTableWidgetItem(ui->course_name->text());
    QTableWidgetItem *course_id = new QTableWidgetItem(ui->course_id->text());
    QTableWidgetItem *noStud = new QTableWidgetItem(ui->noStud->text());
    QTableWidgetItem *dueAssn = new QTableWidgetItem(ui->dueAssn->text());
    QTableWidgetItem *times = new QTableWidgetItem(ui->times->text());

    ui->tableWidget->setItem(ref,0,course_name);
    ui->tableWidget->setItem(ref,1,course_id);
    ui->tableWidget->setItem(ref,2,noStud);
    ui->tableWidget->setItem(ref,3,dueAssn);
    ui->tableWidget->setItem(ref,4,times);
    ref++;
    return 0;
}
int MainWindow::addStudent()
{
    QTableWidgetItem *student = new QTableWidgetItem(ui->studentName->text());
    QTableWidgetItem *rawGrade = new QTableWidgetItem(ui->rawGrade->text());
    QTableWidgetItem *adjustedGrade = new QTableWidgetItem(ui->adjustedGrade->text());
    QTableWidgetItem *letterGrade = new QTableWidgetItem(ui->letterGrade->text());
    QTableWidgetItem *notes = new QTableWidgetItem(ui->notes->text());

    ui->tableWidget_3->setItem(study,0,student);
    ui->tableWidget_3->setItem(study,1,rawGrade);
    ui->tableWidget_3->setItem(study,2,adjustedGrade);
    ui->tableWidget_3->setItem(study,3,letterGrade);
    ui->tableWidget_3->setItem(study,4,notes);
    study++;
    return 0;
}

int MainWindow::addAssign()
{
    QTableWidgetItem *assignName = new QTableWidgetItem(ui->assignName->text());
    QTableWidgetItem *assignID = new QTableWidgetItem(ui->assignID->text());
    QTableWidgetItem *totalGrade = new QTableWidgetItem(ui->totalGrade->text());
    QTableWidgetItem *weight = new QTableWidgetItem(ui->weight->text());
    QTableWidgetItem *dateDue = new QTableWidgetItem(ui->dateDue->text());
    QTableWidgetItem *type = new QTableWidgetItem(ui->type->text());
    QTableWidgetItem *notesAssign = new QTableWidgetItem(ui->notesAssign->text());

    ui->tableWidget_2->setItem(assign,0,assignName);
    ui->tableWidget_2->setItem(assign,1,assignID);
    ui->tableWidget_2->setItem(assign,2,totalGrade);
    ui->tableWidget_2->setItem(assign,3,weight);
    ui->tableWidget_2->setItem(assign,4,dateDue);
    ui->tableWidget_2->setItem(assign,5,type);
    ui->tableWidget_2->setItem(assign,6,notesAssign);
    assign++;
    return 0;
}

QString MainWindow::loadAssign()
{
    QString str;
    str = getAssign("assign/"+ui->comboBox_4->currentText()+".xml");

    QStringList list = str.split(",,");
    //used for testing purposes
    assign = list.length()/7-1;
    ui->tableWidget_2->clearContents();
    for(int i=0; i<list.length(); i++)
    {
        QTableWidgetItem *qtItem = new QTableWidgetItem(list[i]);

        ui->tableWidget_2->setItem(0,i-7,qtItem);

    }
    //ui->textEdit->setText(QString::number(list.length()));
    //ui->textEdit_2->setText(QString::number(ref));
    return str;
}

QString MainWindow::loadStudent()
{
    QString str;

    QString s = "students/"+ui->comboBox->currentText()+".xml";
    str = getStudent(s);

    QStringList list = str.split(",,");
    //used for testing purposes
    study = list.length()/5-1;
    ui->tableWidget_3->clearContents();
    for(int i=3; i<list.length(); i++)
    {
        QTableWidgetItem *qtItem = new QTableWidgetItem(list[i]);

        ui->tableWidget_3->setItem(0,i-5,qtItem);

    }
    //ui->textEdit->setText(QString::number(list.length()));
    //ui->textEdit_2->setText(QString::number(ref));
    return str;
}

int MainWindow::loadMainPage()
{
    for (int i=0; i < 100; ++i)
            ui->tableWidget_5->removeRow(0);
    for (int i=0; i < 100; ++i)
            ui->tableWidget_5->removeColumn(0);

    QString studentsList;
    QString assignList;
    QString students = "students/"+ui->comboBox_5->currentText()+".xml";
    QString assign = "assign/"+ui->comboBox_5->currentText()+".xml";
    studentsList = getClassStudent(students);
    assignList = getClassAssign(assign);

    QStringList students1 = studentsList.split(",,");
    for(int i=0; i<students1.length()-2; i++)
    {
        ui->tableWidget_5->insertRow(i);

    }
    if(students1[0]=="")
    {
        students1.removeFirst();
    }
    ui->tableWidget_5->setVerticalHeaderLabels(students1);

    QStringList assign1 = assignList.split(",,");
    for(int i=0; i<assign1.length()-2; i++)
    {
        ui->tableWidget_5->insertColumn(i);

    }
    if(assign1[0]=="")
    {
        assign1.removeFirst();
    }
    ui->tableWidget_5->setHorizontalHeaderLabels(assign1);

    int rowCount = ui->tableWidget_5->rowCount();
    int colCount = ui->tableWidget_5->columnCount();

    for(int i=0; i<rowCount; i++)
    {
        for(int z=0; z<colCount;z++)
        {
            QTableWidgetItem *item12 = new QTableWidgetItem("N/A");
            ui->tableWidget_5->setItem(i,z,item12);
        }
    }

    return 0;
}


int MainWindow::saveStudents()
{
    QString text;
    QString fileName = ui->comboBox->currentText();
    int i;
    text +="<"+fileName+">\n";
    for(i = 0; i<study; i++)
    {
        if(ui->tableWidget_3->item(i,0)->text().isEmpty())
        {
            text+="";
        }
        else
        {
             text += "<student name=\""+ui->tableWidget_3->item(i,0)->text()+"\" rawGrade=\"";
             text += ui->tableWidget_3->item(i,1)->text()+"\" adjustedGrade=\"";
             text += ui->tableWidget_3->item(i,2)->text()+"\" letterGrade=\"";
             text += ui->tableWidget_3->item(i,3)->text()+"\" notes=\"";
             text += ui->tableWidget_3->item(i,4)->text()+"\"/>\n";
         }
    }
    text += "</"+fileName+">\n";
    QFile file("students/"+fileName+".xml");
    if(file.open(QFile::WriteOnly))
    {
        QTextStream out(&file);
        out << text;
    }
    file.close();
    return 0;
}
int MainWindow::saveAssign()
{
    QString text;
    QString fileName = ui->comboBox_4->currentText();
    int i;
    text += "<"+fileName+">\n";
    for(i = 0; i<assign; i++)
    {
        if(ui->tableWidget_2->item(i,0)->text().isEmpty())
        {
            text+="";
        }
        else
        {
             text += "<assignment name=\""+ui->tableWidget_2->item(i,0)->text()+"\" assigmentId=\"";
             text += ui->tableWidget_2->item(i,1)->text()+"\" totalPosGrade=\"";
             text += ui->tableWidget_2->item(i,2)->text()+"\" weight=\"";
             text += ui->tableWidget_2->item(i,3)->text()+"\" dueDate=\"";
             text += ui->tableWidget_2->item(i,4)->text()+"\" type=\"";
             text += ui->tableWidget_2->item(i,5)->text()+"\" notes=\"";
             text += ui->tableWidget_2->item(i,6)->text()+"\"/>\n";
         }
    }
    text += "</"+fileName+">\n";
    QFile file("assign/"+fileName+".xml");
    if(file.open(QFile::WriteOnly))
    {
        QTextStream out(&file);
        out << text;
    }
    file.close();
    return 0;
}

//this method populates the comboBox
int MainWindow::fillBox()
{
    QString comboElem = getOnlyClasses();
    QStringList dropDown = comboElem.split(",,");
    //the comboElem will populate the comboBox under the students tab

           //the comboBox should be populated using a loop and a string that holds only the classes from the xml file    
        ui->comboBox->clear();
        ui->comboBox->insertItems(0,dropDown);
        ui->comboBox_4->clear();
        ui->comboBox_5->clear();
        ui->comboBox_2->clear();
        ui->comboBox_4->insertItems(0,dropDown);
        ui->comboBox_5->insertItems(0,dropDown);
        ui->comboBox_2->insertItems(0,dropDown);

    return 0;
}

int MainWindow::listStudents()
{
    QString students = "students/"+ui->comboBox_2->currentText()+".xml";
    QString str = getClassStudent(students);
    QStringList dropDown = str.split(",,");
    ui->comboBox_3->clear();
    ui->comboBox_3->insertItems(0,dropDown);
    return 0;
}

// this creates files in the grades/ folder that hold grades for each class
int MainWindow::saveClasses()
{
    QString text;
    QString fileName = ui->comboBox_5->currentText();
    int i;
    text += "<"+fileName+">\n";
    //this variable holds the number of columns
    int colCount = ui->tableWidget_5->columnCount();
    for(i = 0; i<ui->tableWidget_5->rowCount(); i++)
    {

             text += "<student name=\""+ui->tableWidget_5->verticalHeaderItem(i)->text();
             for(int z=0; z<colCount; z++)
             {
                 if(ui->tableWidget_5->item(i,z)->text().isEmpty())
                 {
                     text+="\" "+ ui->tableWidget_5->horizontalHeaderItem(z)->text() +"=\""+"";
                 }
                 else
                 {
                    text += "\" "+ ui->tableWidget_5->horizontalHeaderItem(z)->text() +"=\""+ui->tableWidget_5->item(i,z)->text();
                 }
             }
             text += "\"/>\n";

    }
    text += "</"+fileName+">\n";
    QFile file("grades/"+fileName+".xml");
    if(file.open(QFile::WriteOnly))
    {
        QTextStream out(&file);
        out << text;
    }
    file.close();

    return 0;
}

//this will load the grades for the specified students in the specified class
int MainWindow::loadGrades()
{
    for (int i=0; i < 100; ++i)
            ui->tableWidget_4->removeRow(0);

    ui->tableWidget_4->reset();
    QString str = getClassAssign("assign/"+ui->comboBox_2->currentText()+".xml");
    QStringList assignList  = str.split(",,");
    assignList.removeFirst();
    for(int i=0; i<assignList.length()-1; i++)
    {
        ui->tableWidget_4->insertRow(i);
    }
    for(int i=0; i<assignList.length()-1; i++)
    {
        QTableWidgetItem *item = new QTableWidgetItem(assignList[i]);
        ui->tableWidget_4->setItem(i,0,item);
    }
    QString string = getGrades("grades/"+ui->comboBox_2->currentText()+".xml", ui->comboBox_3->currentText());
    QStringList gradesList = string.split(",,");
    for(int i=0; i<gradesList.length()-1; i++)
    {
        QTableWidgetItem *item = new QTableWidgetItem(gradesList[i]);
        ui->tableWidget_4->setItem(i,1,item);
    }
    return 0;
}

//removes assignment from the table widget(also from the assignment string list)
//int MainWindow::rmvAssign()
//{
//    for(int i = 0; i<assign.length(); i++)
//    {
//        if(ui->rmvAssign->text() == assign[i])
//        {
//            ui->tableWidget_5->removeColumn(i);
//            assign.removeAt(i);
//        }
//    }
//    return 0;
//}
//
////removes student from the table widget(also from the students string list)
//int MainWindow::rmvStudent()
//{
//    for(int i = 0; i<students.length(); i++)
//    {
//        if(ui->rmvStudent->text() == students[i])
//        {
//            ui->tableWidget_5->removeRow(i);
//            students.removeAt(i);
//        }
//    }
//
//    return 0;
//}
////testing function to display the contents of the assignments string list
//QString MainWindow::displayAssign()
//{
//    QString final;
//    for(int i=0; i<assign.length(); i++)
//    {
//        final += assign[i]+" ";
//    }
//    return final;
//}
