#ifndef REGISTERWIDGET_H
#define REGISTERWIDGET_H

#include <QWidget>
#include <QtWidgets>

class registerWidget : public QWidget
{
    Q_OBJECT
public:
    explicit registerWidget(QWidget *parent = 0);

    QLabel *welcome;
    QLabel *fname;
    QLineEdit *fname_edit;
    QLabel *lname;
    QLineEdit *lname_edit;
    QLabel *username;
    QLineEdit *username_edit;
    QLabel *password;
    QLineEdit *password_edit;
    QLabel *passwordconf;
    QLineEdit *passwordconf_edit;

    QGridLayout *register_layout;





signals:

public slots:



};

#endif // REGISTERWIDGET_H
