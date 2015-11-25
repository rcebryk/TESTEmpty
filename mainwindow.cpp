#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionOpen,SIGNAL(triggered(bool)),SLOT(openSaveFileDialog()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openSaveFileDialog()
{
    QString received = QFileDialog::getSaveFileName(this,"Save File");
    qDebug() << "Received: " << received;
}

void MainWindow::on_actionAndCheckBox_triggered()
{
    ui->horizontalSlider->setValue(0);
}
