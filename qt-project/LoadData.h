#ifndef LOADDATA_H
#define LOADDATA_H

#include "mainwindow.h"
#include <QMessageBox>
#include <QXmlStreamReader>
#include <QFile>

QString MainWindow::getClasses()
{
    QFile file("text.xml");
    if(!file.open(QIODevice::ReadWrite))
    {
        QMessageBox::critical(this, "example", "could not open", QMessageBox::Ok);
    }
    QXmlStreamReader xml(&file);
    QString str;
    while(!xml.atEnd())
    {
        if(xml.isStartElement())
        {

            QXmlStreamAttributes att = xml.attributes();
            QString course = att.value("name").toString();
            QString id = att.value("id").toString();
            QString noStudents = att.value("noStudents").toString();
            QString nextAssignment = att.value("nextAssignment").toString();
            QString times = att.value("times").toString();
            str += course +",,"+ id +",,"+ noStudents +",,"+ nextAssignment +",,"+ times+",,";
            if(course.isEmpty())
            {
                xml.readNext();
                continue;
            }
        }
        else if(xml.isEndElement() && xml.name() == "classes")
        {
            return str;
        }

        xml.readNext();
    }
    file.close();
    return str;
}


QString MainWindow::getAssign(QString strin)
{
    QFile file(strin);
//    QMessageBox mess;
//    mess.setText(strin);
//    mess.exec();
    if(!file.open(QIODevice::ReadWrite))
    {
        QMessageBox::critical(this, "example", "could not open", QMessageBox::Ok);
    }
    QXmlStreamReader xml(&file);
    QString str;
    while(!xml.atEnd())
    {
        if(xml.isStartElement())
        {

            QXmlStreamAttributes att = xml.attributes();
            QString course = att.value("name").toString();
            QString id = att.value("assigmentId").toString();
            QString tpg = att.value("totalPosGrade").toString();
            QString weight = att.value("weight").toString();
            QString dueDate = att.value("dueDate").toString();
            QString type = att.value("type").toString();
            QString notes = att.value("notes").toString();
            str += course +",,"+ id +",,"+ tpg +",,"+ weight +",,"+ dueDate
                   +",," + type +",," + notes +",,";
            if(course.isEmpty())
            {
                xml.readNext();
                continue;
            }
        }
        else if(xml.isEndElement() && xml.name() == strin)
        {
            return str;
        }

        xml.readNext();
    }
    file.close();
    return str;
}



QString MainWindow::getStudent(QString strin)
{
    QFile file(strin);
//    QMessageBox mess;
//    mess.setText(strin);
//    mess.exec();
    if(!file.open(QIODevice::ReadWrite))
    {
        QMessageBox::critical(this, "example", "could not open", QMessageBox::Ok);
    }
    QXmlStreamReader xml(&file);
    QString str;
    while(!xml.atEnd())
    {
        if(xml.isStartElement())
        {

            QXmlStreamAttributes att = xml.attributes();
            QString studname = att.value("name").toString();
            QString RawGrade = att.value("rawGrade").toString();
            QString AdjustedGrade = att.value("adjustedGrade").toString();
            QString LetterGrade = att.value("letterGrade").toString();
            QString notes = att.value("notes").toString();
            str += studname +",,"+ RawGrade +",,"+ AdjustedGrade +",,"+ LetterGrade +",,"+ notes+",,";
            if(studname.isEmpty())
            {
                xml.readNext();
                continue;
            }
        }
        else if(xml.isEndElement() && xml.name() == strin)
        {
            return str;
        }

        xml.readNext();
    }
    file.close();
    return str;
}

//this method gets only the classes names to populate the comboBox
QString MainWindow::getOnlyClasses()
{
    QFile file("text.xml");
    if(!file.open(QIODevice::ReadWrite))
    {
        QMessageBox::critical(this, "example", "could not open", QMessageBox::Ok);
    }
    QXmlStreamReader xml1(&file);
    QString str1;
    while(!xml1.atEnd())
    {
        if(xml1.isStartElement())
        {
            QXmlStreamAttributes att1 = xml1.attributes();
            QString course1 = att1.value("name").toString();
            str1 += course1 +",,";
            if(course1.isEmpty())
            {
                xml1.readNext();
                continue;
            }
        }

        else if(xml1.isEndElement() && xml1.name() == "classes")
        {
            return str1;
        }

        xml1.readNext();
    }
    file.close();
    return str1;
}

QString MainWindow::getClassAssign(QString strin)
{

    QFile file(strin);
    if(!file.open(QIODevice::ReadWrite))
    {
        QMessageBox::critical(this, "example", "could not open", QMessageBox::Ok);
    }
    QXmlStreamReader xml(&file);
    QString str;
    while(!xml.atEnd())
    {
        if(xml.isStartElement())
        {

            QXmlStreamAttributes att = xml.attributes();
            QString course = att.value("name").toString();
            str += course +",,";
            if(course.isEmpty())
            {
                xml.readNext();
                continue;
            }
        }
        else if(xml.isEndElement() && xml.name() == strin)
        {
            return str;
        }

        xml.readNext();
    }
    file.close();
    return str;
}
QString MainWindow::getClassStudent(QString strin)
{

    QFile file(strin);
    if(!file.open(QIODevice::ReadWrite))
    {
        QMessageBox::critical(this, "example", "could not open", QMessageBox::Ok);
    }
    QXmlStreamReader xml(&file);
    QString str;
    while(!xml.atEnd())
    {
        if(xml.isStartElement())
        {

            QXmlStreamAttributes att = xml.attributes();

            QString studname = att.value("name").toString();

            str += studname +",,";
            if(studname.isEmpty())
            {
                xml.readNext();
                continue;
            }
        }
        else if(xml.isEndElement() && xml.name() == strin)
        {
            return str;
        }

        xml.readNext();
    }
    file.close();
    return str;
}

//this will load the grades from the xml file
QString MainWindow::getGrades(QString strin, QString str1)
{
    QFile file(strin);
    if(!file.open(QIODevice::ReadWrite))
    {
        QMessageBox::critical(this, "example", "could not open", QMessageBox::Ok);
    }
    QXmlStreamReader xml(&file);
    QString str;
    while(!xml.atEnd())
    {
        if(xml.isStartElement())
        {

            QXmlStreamAttributes att = xml.attributes();

            QString studname = att.value("name").toString();
            if(studname == str1)
            {
               //then we parse the rest of the line
                //we open the xml file that holds the names and assignments with the grade
                //the xml file will be the class selected
                //we have to return the # of assignments
                QString assignments = getClassAssign("assign/"+ui->comboBox_2->currentText()+".xml");

                QStringList assignList = assignments.split(",,");
                assignList.removeFirst();

//                QMessageBox mess1;
//                mess1.setText(assignments);
//                mess1.exec();
                //holds the number of assignments
                int assignNumb = assignList.length();
                for(int i = 0; i<assignNumb-1; i++)
                {
                    str+=att.value(assignList[i]).toString()+",,";
                }

            }

            if(studname.isEmpty())
            {
                xml.readNext();
                continue;
            }
        }
        else if(xml.isEndElement() && xml.name() == strin)
        {
            return str;
        }

        xml.readNext();
    }
    file.close();
    return str;
}

#endif // LOADDATA_H

