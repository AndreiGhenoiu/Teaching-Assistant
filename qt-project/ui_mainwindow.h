/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Aug 27 10:38:43 2012
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionClose;
    QAction *actionRead_me;
    QAction *actionTutorial;
    QWidget *centralWidget;
    QTabWidget *CMSTabs;
    QWidget *MainPage;
    QTableWidget *tableWidget_5;
    QComboBox *comboBox_5;
    QLabel *label_14;
    QPushButton *pushButton_11;
    QWidget *classes;
    QTableWidget *tableWidget;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLineEdit *course_name;
    QLineEdit *course_id;
    QLineEdit *noStud;
    QLineEdit *dueAssn;
    QLineEdit *times;
    QPushButton *addCourse;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QFrame *line_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_8;
    QWidget *class_details;
    QTableWidget *tableWidget_2;
    QComboBox *comboBox_4;
    QPushButton *pushButton;
    QLineEdit *rmvAssign;
    QFrame *line;
    QLineEdit *assignName;
    QLineEdit *assignID;
    QLineEdit *totalGrade;
    QLineEdit *weight;
    QLineEdit *dateDue;
    QLineEdit *type;
    QLineEdit *notesAssign;
    QPushButton *pushButton_6;
    QPushButton *pushButton_10;
    QLabel *label_13;
    QLabel *label_15;
    QFrame *line_2;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QWidget *students;
    QTableWidget *tableWidget_3;
    QComboBox *comboBox;
    QLabel *label;
    QLineEdit *rmvStudent;
    QPushButton *pushButton_2;
    QPushButton *pushButton_7;
    QLineEdit *studentName;
    QPushButton *pushButton_9;
    QLineEdit *rawGrade;
    QLineEdit *adjustedGrade;
    QLineEdit *letterGrade;
    QLineEdit *notes;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QFrame *line_4;
    QFrame *line_5;
    QLabel *label_21;
    QLabel *label_22;
    QWidget *students_details;
    QTableWidget *tableWidget_4;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QPushButton *pushButton_3;
    QLabel *label_6;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuClass_Management_System;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1016, 627);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionRead_me = new QAction(MainWindow);
        actionRead_me->setObjectName(QString::fromUtf8("actionRead_me"));
        actionTutorial = new QAction(MainWindow);
        actionTutorial->setObjectName(QString::fromUtf8("actionTutorial"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        CMSTabs = new QTabWidget(centralWidget);
        CMSTabs->setObjectName(QString::fromUtf8("CMSTabs"));
        CMSTabs->setGeometry(QRect(10, 30, 1001, 551));
        MainPage = new QWidget();
        MainPage->setObjectName(QString::fromUtf8("MainPage"));
        tableWidget_5 = new QTableWidget(MainPage);
        tableWidget_5->setObjectName(QString::fromUtf8("tableWidget_5"));
        tableWidget_5->setGeometry(QRect(10, 40, 621, 471));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(30);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget_5->sizePolicy().hasHeightForWidth());
        tableWidget_5->setSizePolicy(sizePolicy);
        tableWidget_5->setMinimumSize(QSize(256, 0));
        tableWidget_5->horizontalHeader()->setDefaultSectionSize(50);
        tableWidget_5->verticalHeader()->setDefaultSectionSize(30);
        comboBox_5 = new QComboBox(MainPage);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setGeometry(QRect(10, 10, 141, 22));
        label_14 = new QLabel(MainPage);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(160, 10, 71, 20));
        pushButton_11 = new QPushButton(MainPage);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(650, 40, 75, 23));
        CMSTabs->addTab(MainPage, QString());
        classes = new QWidget();
        classes->setObjectName(QString::fromUtf8("classes"));
        tableWidget = new QTableWidget(classes);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QFont font;
        font.setPointSize(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 10)
            tableWidget->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem14);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 50, 511, 321));
        tableWidget->setBaseSize(QSize(10, 10));
        tableWidget->setAutoScroll(false);
        pushButton_4 = new QPushButton(classes);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 10, 75, 23));
        pushButton_5 = new QPushButton(classes);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(100, 10, 75, 23));
        course_name = new QLineEdit(classes);
        course_name->setObjectName(QString::fromUtf8("course_name"));
        course_name->setGeometry(QRect(550, 110, 113, 20));
        course_id = new QLineEdit(classes);
        course_id->setObjectName(QString::fromUtf8("course_id"));
        course_id->setGeometry(QRect(550, 140, 113, 20));
        noStud = new QLineEdit(classes);
        noStud->setObjectName(QString::fromUtf8("noStud"));
        noStud->setGeometry(QRect(550, 170, 113, 20));
        dueAssn = new QLineEdit(classes);
        dueAssn->setObjectName(QString::fromUtf8("dueAssn"));
        dueAssn->setGeometry(QRect(550, 200, 113, 20));
        times = new QLineEdit(classes);
        times->setObjectName(QString::fromUtf8("times"));
        times->setGeometry(QRect(550, 230, 113, 20));
        addCourse = new QPushButton(classes);
        addCourse->setObjectName(QString::fromUtf8("addCourse"));
        addCourse->setGeometry(QRect(550, 260, 75, 23));
        label_7 = new QLabel(classes);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(550, 60, 171, 41));
        label_8 = new QLabel(classes);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(680, 110, 71, 16));
        label_9 = new QLabel(classes);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(680, 140, 51, 16));
        label_10 = new QLabel(classes);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(680, 170, 101, 16));
        label_11 = new QLabel(classes);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(680, 200, 111, 16));
        label_12 = new QLabel(classes);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(680, 230, 81, 16));
        line_3 = new QFrame(classes);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(550, 286, 241, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(classes);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(680, 310, 81, 16));
        lineEdit = new QLineEdit(classes);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(550, 310, 113, 20));
        pushButton_8 = new QPushButton(classes);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(550, 340, 91, 23));
        CMSTabs->addTab(classes, QString());
        class_details = new QWidget();
        class_details->setObjectName(QString::fromUtf8("class_details"));
        tableWidget_2 = new QTableWidget(class_details);
        if (tableWidget_2->columnCount() < 7)
            tableWidget_2->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setFont(font);
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setFont(font);
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setFont(font);
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setFont(font);
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(6, __qtablewidgetitem21);
        if (tableWidget_2->rowCount() < 10)
            tableWidget_2->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(1, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(2, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(3, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(4, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(5, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(6, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(7, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(8, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(9, __qtablewidgetitem31);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(10, 40, 711, 381));
        comboBox_4 = new QComboBox(class_details);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(10, 10, 141, 22));
        pushButton = new QPushButton(class_details);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(730, 400, 75, 23));
        rmvAssign = new QLineEdit(class_details);
        rmvAssign->setObjectName(QString::fromUtf8("rmvAssign"));
        rmvAssign->setGeometry(QRect(730, 370, 71, 20));
        line = new QFrame(class_details);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(730, 360, 118, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        assignName = new QLineEdit(class_details);
        assignName->setObjectName(QString::fromUtf8("assignName"));
        assignName->setGeometry(QRect(730, 40, 113, 20));
        assignID = new QLineEdit(class_details);
        assignID->setObjectName(QString::fromUtf8("assignID"));
        assignID->setGeometry(QRect(730, 70, 113, 20));
        totalGrade = new QLineEdit(class_details);
        totalGrade->setObjectName(QString::fromUtf8("totalGrade"));
        totalGrade->setGeometry(QRect(730, 100, 113, 20));
        weight = new QLineEdit(class_details);
        weight->setObjectName(QString::fromUtf8("weight"));
        weight->setGeometry(QRect(730, 130, 113, 20));
        dateDue = new QLineEdit(class_details);
        dateDue->setObjectName(QString::fromUtf8("dateDue"));
        dateDue->setGeometry(QRect(730, 160, 113, 20));
        type = new QLineEdit(class_details);
        type->setObjectName(QString::fromUtf8("type"));
        type->setGeometry(QRect(730, 190, 113, 20));
        notesAssign = new QLineEdit(class_details);
        notesAssign->setObjectName(QString::fromUtf8("notesAssign"));
        notesAssign->setGeometry(QRect(730, 220, 113, 20));
        pushButton_6 = new QPushButton(class_details);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(730, 330, 75, 23));
        pushButton_10 = new QPushButton(class_details);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(730, 250, 75, 23));
        label_13 = new QLabel(class_details);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(160, 10, 71, 20));
        label_15 = new QLabel(class_details);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(730, 290, 111, 31));
        line_2 = new QFrame(class_details);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(730, 280, 118, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_23 = new QLabel(class_details);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(860, 40, 61, 16));
        label_24 = new QLabel(class_details);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(860, 70, 81, 16));
        label_25 = new QLabel(class_details);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(860, 100, 101, 16));
        label_26 = new QLabel(class_details);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(860, 130, 46, 13));
        label_27 = new QLabel(class_details);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(860, 160, 46, 13));
        label_28 = new QLabel(class_details);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(860, 190, 46, 13));
        label_29 = new QLabel(class_details);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(860, 220, 46, 13));
        CMSTabs->addTab(class_details, QString());
        students = new QWidget();
        students->setObjectName(QString::fromUtf8("students"));
        tableWidget_3 = new QTableWidget(students);
        if (tableWidget_3->columnCount() < 5)
            tableWidget_3->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        __qtablewidgetitem32->setFont(font);
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        __qtablewidgetitem33->setFont(font);
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        __qtablewidgetitem34->setFont(font);
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        __qtablewidgetitem35->setFont(font);
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        __qtablewidgetitem36->setFont(font);
        tableWidget_3->setHorizontalHeaderItem(4, __qtablewidgetitem36);
        if (tableWidget_3->rowCount() < 10)
            tableWidget_3->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(0, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(1, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(2, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(3, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(4, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(5, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(6, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(7, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(8, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(9, __qtablewidgetitem46);
        tableWidget_3->setObjectName(QString::fromUtf8("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(10, 40, 541, 371));
        comboBox = new QComboBox(students);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 10, 141, 22));
        label = new QLabel(students);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 10, 71, 20));
        rmvStudent = new QLineEdit(students);
        rmvStudent->setObjectName(QString::fromUtf8("rmvStudent"));
        rmvStudent->setGeometry(QRect(570, 380, 71, 20));
        pushButton_2 = new QPushButton(students);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(650, 380, 75, 23));
        pushButton_7 = new QPushButton(students);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(570, 230, 75, 23));
#ifndef QT_NO_WHATSTHIS
        pushButton_7->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS
        studentName = new QLineEdit(students);
        studentName->setObjectName(QString::fromUtf8("studentName"));
        studentName->setGeometry(QRect(570, 80, 111, 20));
        pushButton_9 = new QPushButton(students);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(570, 320, 75, 23));
        rawGrade = new QLineEdit(students);
        rawGrade->setObjectName(QString::fromUtf8("rawGrade"));
        rawGrade->setGeometry(QRect(570, 110, 113, 20));
        adjustedGrade = new QLineEdit(students);
        adjustedGrade->setObjectName(QString::fromUtf8("adjustedGrade"));
        adjustedGrade->setGeometry(QRect(570, 140, 113, 20));
        letterGrade = new QLineEdit(students);
        letterGrade->setObjectName(QString::fromUtf8("letterGrade"));
        letterGrade->setGeometry(QRect(570, 170, 113, 20));
        notes = new QLineEdit(students);
        notes->setObjectName(QString::fromUtf8("notes"));
        notes->setGeometry(QRect(570, 200, 113, 20));
        label_16 = new QLabel(students);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(690, 80, 46, 13));
        label_17 = new QLabel(students);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(690, 110, 61, 16));
        label_18 = new QLabel(students);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(690, 140, 81, 16));
        label_19 = new QLabel(students);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(690, 170, 71, 16));
        label_20 = new QLabel(students);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(690, 200, 61, 16));
        line_4 = new QFrame(students);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(570, 260, 171, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(students);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(570, 350, 171, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        label_21 = new QLabel(students);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(570, 280, 111, 31));
        label_22 = new QLabel(students);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(570, 40, 171, 31));
        CMSTabs->addTab(students, QString());
        students_details = new QWidget();
        students_details->setObjectName(QString::fromUtf8("students_details"));
        tableWidget_4 = new QTableWidget(students_details);
        if (tableWidget_4->columnCount() < 4)
            tableWidget_4->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        __qtablewidgetitem47->setFont(font);
        tableWidget_4->setHorizontalHeaderItem(0, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        __qtablewidgetitem48->setFont(font);
        tableWidget_4->setHorizontalHeaderItem(1, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        __qtablewidgetitem49->setFont(font);
        tableWidget_4->setHorizontalHeaderItem(2, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(3, __qtablewidgetitem50);
        tableWidget_4->setObjectName(QString::fromUtf8("tableWidget_4"));
        tableWidget_4->setGeometry(QRect(0, 40, 515, 325));
        tableWidget_4->setMinimumSize(QSize(515, 325));
        comboBox_2 = new QComboBox(students_details);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(10, 10, 91, 22));
        comboBox_3 = new QComboBox(students_details);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(110, 10, 69, 22));
        pushButton_3 = new QPushButton(students_details);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(190, 10, 31, 23));
        CMSTabs->addTab(students_details, QString());
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(280, 570, 101, 16));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1016, 20));
        menuClass_Management_System = new QMenu(menuBar);
        menuClass_Management_System->setObjectName(QString::fromUtf8("menuClass_Management_System"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuClass_Management_System->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuClass_Management_System->addAction(actionClose);
        menuHelp->addAction(actionRead_me);
        menuHelp->addAction(actionTutorial);

        retranslateUi(MainWindow);
        QObject::connect(actionClose, SIGNAL(activated()), MainWindow, SLOT(close()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), MainWindow, SLOT(loadData()));
        QObject::connect(CMSTabs, SIGNAL(selected(QString)), MainWindow, SLOT(fillBox()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), MainWindow, SLOT(saveData()));
        QObject::connect(addCourse, SIGNAL(clicked()), MainWindow, SLOT(addClass()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), MainWindow, SLOT(addStudent()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), MainWindow, SLOT(saveStudents()));
        QObject::connect(pushButton_10, SIGNAL(clicked()), MainWindow, SLOT(addAssign()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), MainWindow, SLOT(saveAssign()));
        QObject::connect(comboBox_5, SIGNAL(activated(QString)), MainWindow, SLOT(loadMainPage()));
        QObject::connect(comboBox_4, SIGNAL(activated(QString)), MainWindow, SLOT(loadAssign()));
        QObject::connect(comboBox, SIGNAL(activated(QString)), MainWindow, SLOT(loadStudent()));
        QObject::connect(pushButton_11, SIGNAL(clicked()), MainWindow, SLOT(saveClasses()));
        QObject::connect(comboBox_2, SIGNAL(activated(QString)), MainWindow, SLOT(listStudents()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), MainWindow, SLOT(loadGrades()));

        CMSTabs->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionClose->setText(QApplication::translate("MainWindow", "Close", 0, QApplication::UnicodeUTF8));
        actionRead_me->setText(QApplication::translate("MainWindow", "Read me", 0, QApplication::UnicodeUTF8));
        actionTutorial->setText(QApplication::translate("MainWindow", "Tutorial", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        CMSTabs->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_14->setText(QApplication::translate("MainWindow", "Name of Class", 0, QApplication::UnicodeUTF8));
        pushButton_11->setText(QApplication::translate("MainWindow", "Save Classes", 0, QApplication::UnicodeUTF8));
        CMSTabs->setTabText(CMSTabs->indexOf(MainPage), QApplication::translate("MainWindow", "Main Page", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Course Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Course ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Number of Students", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Next Assignment Due", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Course Times", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainWindow", "Load courses", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("MainWindow", "Save courses", 0, QApplication::UnicodeUTF8));
        addCourse->setText(QApplication::translate("MainWindow", "Add Course", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Below you can enter each course \n"
"you are teaching.", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Course name", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Course ID", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Number of students", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Next assignment due", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Course times", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Remove course", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("MainWindow", "Remove course", 0, QApplication::UnicodeUTF8));
        CMSTabs->setTabText(CMSTabs->indexOf(classes), QApplication::translate("MainWindow", "Classes", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Assignment", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Assignment ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Total possible grade", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Weight", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Date Due", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "Type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_2->horizontalHeaderItem(6);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "Notes", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Rmv Assignm.", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("MainWindow", "Save Assign", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("MainWindow", "Add Assign", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Name of Class", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Below you can save </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">the assignment list</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("MainWindow", "Assignment", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("MainWindow", "Assignment ID", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("MainWindow", "Total possible grade", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("MainWindow", "Weight", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("MainWindow", "Due date", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("MainWindow", "Type", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("MainWindow", "Notes", 0, QApplication::UnicodeUTF8));
        CMSTabs->setTabText(CMSTabs->indexOf(class_details), QApplication::translate("MainWindow", "Assignments", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "Student", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "Raw Grade", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "Adjusted Grade", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "Letter Grade", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_3->horizontalHeaderItem(4);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "Notes", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Name of Class", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "Rmv Student", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        pushButton_7->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        pushButton_7->setText(QApplication::translate("MainWindow", "Add Student", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("MainWindow", "Save list", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "Student", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "Raw grade", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "Adjusted grade", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "Letter grade", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "Notes", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Below you can save</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\"> the current list</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Below you can add each student</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\"> that is enrolled in a specific class</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        CMSTabs->setTabText(CMSTabs->indexOf(students), QApplication::translate("MainWindow", "Students", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_4->horizontalHeaderItem(0);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "Assignment", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_4->horizontalHeaderItem(1);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "Grade", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_4->horizontalHeaderItem(2);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "Possible Grade", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_4->horizontalHeaderItem(3);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "Weight", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Class/Section", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Class 1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Class 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Class 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Class 4", 0, QApplication::UnicodeUTF8)
        );
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Student", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Zachary", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Jesus Fish", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Erik", 0, QApplication::UnicodeUTF8)
        );
        pushButton_3->setText(QApplication::translate("MainWindow", "Go", 0, QApplication::UnicodeUTF8));
        CMSTabs->setTabText(CMSTabs->indexOf(students_details), QApplication::translate("MainWindow", "Student Profile", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "\302\251 2009 Vitamin C", 0, QApplication::UnicodeUTF8));
        menuClass_Management_System->setTitle(QApplication::translate("MainWindow", "Class Management System", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
