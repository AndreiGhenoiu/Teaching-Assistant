#include "form.h"
#include "ui_form.h"
#include <QMessageBox>

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

QString Form::saveAssn()
{
    QString str = ui->assiname->text();
    //QMessageBox::critical(this, "example", "could not open", QMessageBox::Ok);
    connect ( this, SIGNAL ( clicked() ), parentWidget(), SLOT ( addAsn1() ) );
    return str;

}

