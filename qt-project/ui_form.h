/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created: Thu Apr 8 00:13:25 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLineEdit *lineEdit_6;
    QFrame *line;
    QLabel *label_3;
    QComboBox *comboBox;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton;
    QLineEdit *assiname;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QPushButton *ok;
    QPushButton *close;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(524, 321);
        lineEdit_6 = new QLineEdit(Form);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(360, 130, 113, 20));
        line = new QFrame(Form);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(260, 10, 31, 251));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(Form);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(295, 20, 91, 20));
        comboBox = new QComboBox(Form);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(390, 20, 111, 22));
        label_6 = new QLabel(Form);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(290, 70, 111, 16));
        label_7 = new QLabel(Form);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(290, 100, 51, 20));
        label_8 = new QLabel(Form);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(290, 130, 61, 16));
        lineEdit_5 = new QLineEdit(Form);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(360, 100, 113, 20));
        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 170, 75, 23));
        assiname = new QLineEdit(Form);
        assiname->setObjectName(QString::fromUtf8("assiname"));
        assiname->setGeometry(QRect(112, 53, 133, 20));
        lineEdit_3 = new QLineEdit(Form);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(112, 129, 133, 20));
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(11, 53, 84, 16));
        label_2 = new QLabel(Form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(11, 91, 69, 16));
        lineEdit_2 = new QLineEdit(Form);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(112, 91, 133, 20));
        label_4 = new QLabel(Form);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(11, 129, 95, 16));
        label_5 = new QLabel(Form);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(11, 167, 34, 16));
        lineEdit_4 = new QLineEdit(Form);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(112, 167, 133, 20));
        ok = new QPushButton(Form);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(310, 260, 75, 23));
        close = new QPushButton(Form);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(310, 290, 75, 23));

        retranslateUi(Form);
        QObject::connect(ok, SIGNAL(clicked()), Form, SLOT(saveAssn()));
        QObject::connect(close, SIGNAL(clicked()), Form, SLOT(close()));

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Form", "Assignment type", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Form", "Quiz", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "Midterm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "Final", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "Assignment", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "Homework", 0, QApplication::UnicodeUTF8)
        );
        label_6->setText(QApplication::translate("Form", "Edit assignment types", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Form", "add type", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Form", "remove type", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Form", "Load defaults", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Form", "Assignment name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Form", "Assignment ID", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Form", "Total possible grade", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Form", "Weight", 0, QApplication::UnicodeUTF8));
        ok->setText(QApplication::translate("Form", "ok", 0, QApplication::UnicodeUTF8));
        close->setText(QApplication::translate("Form", "close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
