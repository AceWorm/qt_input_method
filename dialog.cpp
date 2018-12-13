#include "dialog.h"
#include "ui_dialog.h"
#include "lib/input_method.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    InputMethod::setKeyboardSize( 480, 280 );

#if BUILD_ARM_VERSION
    InputMethod::setKeyboardFontPointSize( 10 );
    InputMethod::setKeyboardMaxChinesePerLine( 11 );
#else
    InputMethod::setKeyboardFontPointSize( 25 );
    InputMethod::setKeyboardMaxChinesePerLine( 12 );
#endif

    ui->pushButton->setFocus();
    ui->plainTextEdit_2->setWordWrapMode( QTextOption::NoWrap );
}


Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    close();
}
