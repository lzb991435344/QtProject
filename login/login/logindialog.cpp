#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>
#include <QWidget>

class QLineEdit;

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    //setEchoMode(QLineEdit::Password);
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_loginBtn_clicked()
{
    if(ui->usrLineEdit->text().trimmed() == tr("liaozhibiao") && ui->pwdLineEdit->text() == tr("123456"))
    {
      accept();
    }else{
        //打印输出信息
      QMessageBox::warning(this,tr("warning"),tr("userName or passwd error"),QMessageBox::Yes);
      //清空内容并定位光标
      ui->usrLineEdit->clear();
      ui->pwdLineEdit->clear();
      ui->usrLineEdit->setFocus();
    }
}
