#ifndef FORM_H
#define FORM_H

#include <QWidget>

namespace Ui {
    class Form;
}

class Form : public QWidget {
    Q_OBJECT
public:
    Form(QWidget *parent = 0);
    ~Form();
    QString title();

protected:
    void changeEvent(QEvent *e);

public slots:
    QString saveAssn();

private:
    Ui::Form *ui;
};

#endif // FORM_H
