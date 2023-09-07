#include "mainform.h"
#include "ui_mainform.h"

MainForm::MainForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainForm)
{
    ui->setupUi(this);

    ui->listWidget->addTodoItem("hello world");
    ui->listWidget->addTodoItem("hello world");
    ui->listWidget->addTodoItem("hello world");
    ui->listWidget->addTodoItem("hello world");
    ui->listWidget->addTodoItem("hello world");
    ui->listWidget->addTodoItem("hello world");
    ui->listWidget->addTodoItem("hello world");
}

MainForm::~MainForm()
{
    delete ui;
}
