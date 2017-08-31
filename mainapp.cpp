#include "mainapp.h"
#include "ui_mainapp.h"

MainApp::MainApp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainApp)
{
    ui->setupUi(this);
}

MainApp::~MainApp()
{
    delete ui;
}

void MainApp::on_btnAddNew_clicked()
{
    QLineEdit *lineEdit = new QLineEdit();
    ui->scrollAreaWidgetContents->layout()->addWidget(lineEdit);
}
