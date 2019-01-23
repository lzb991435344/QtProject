/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *usrLineEdit;
    QLineEdit *pwdLineEdit;
    QPushButton *loginBtn;
    QPushButton *exitBtn;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(400, 300);
        LoginDialog->setFocusPolicy(Qt::ClickFocus);
        label = new QLabel(LoginDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 110, 54, 12));
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 140, 54, 12));
        usrLineEdit = new QLineEdit(LoginDialog);
        usrLineEdit->setObjectName(QString::fromUtf8("usrLineEdit"));
        usrLineEdit->setGeometry(QRect(100, 110, 113, 20));
        pwdLineEdit = new QLineEdit(LoginDialog);
        pwdLineEdit->setObjectName(QString::fromUtf8("pwdLineEdit"));
        pwdLineEdit->setGeometry(QRect(100, 140, 113, 20));
        pwdLineEdit->setEchoMode(QLineEdit::Password);
        loginBtn = new QPushButton(LoginDialog);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setGeometry(QRect(50, 200, 75, 23));
        exitBtn = new QPushButton(LoginDialog);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));
        exitBtn->setGeometry(QRect(170, 200, 75, 23));

        retranslateUi(LoginDialog);
        QObject::connect(exitBtn, SIGNAL(clicked()), LoginDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("LoginDialog", "userName:", nullptr));
        label_2->setText(QApplication::translate("LoginDialog", "passwd:", nullptr));
        loginBtn->setText(QApplication::translate("LoginDialog", "login", nullptr));
        exitBtn->setText(QApplication::translate("LoginDialog", "exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
