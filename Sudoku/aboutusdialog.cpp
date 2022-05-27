#include "aboutusdialog.h"
#include "ui_aboutusdialog.h"

AboutUsDialog::AboutUsDialog(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::AboutUsDialog)
{
	ui->setupUi(this);
	setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
}

AboutUsDialog::~AboutUsDialog()
{
	delete ui;
}

void AboutUsDialog::on_pushButton_clicked()
{
	this->close();
}
