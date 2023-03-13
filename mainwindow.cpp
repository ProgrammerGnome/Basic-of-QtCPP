#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_pushButton_clicked()
{
  QString text;
  int number = 10;

  text = ui->lineEdit->text();
  //text = ui->textEdit->toPlainText();
  int num = QVariant(text).toInt() + number;

  ui->plainTextEdit->setPlainText(QVariant(num).toString());
  //ui->textEdit->setText(text);
}
