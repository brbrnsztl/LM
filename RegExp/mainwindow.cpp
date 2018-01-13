#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
     QString txt = ui->lineEdit->text();
     std::string text = txt.toStdString();
     onpCalculate *onp = new onpCalculate();
     std::string calculateExpression = onp->calculate(text);
     QString c = QString::fromStdString(calculateExpression);
     ui ->lineEdit_2->setText(c);
}
