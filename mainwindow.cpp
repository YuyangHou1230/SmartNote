#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
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

MainWindow::~MainWindow()
{
    delete ui;
}

