#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>

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
    QString dstPath = "C:/Users/PAPPU KUMAR KESHARI/OneDrive/Desktop/New folder/Destination/Pappu123.txt";
//    QString dstPath = "C:/Users/PAPPU KUMAR KESHARI/OneDrive/Desktop/New folder/Destination/dialog2.cpp";

       if(QFile::exists(dstPath))
       QFile::remove(dstPath);
       Q_ASSUME(QFile::copy("C:/Users/PAPPU KUMAR KESHARI/OneDrive/Desktop/New folder/Source/Pappu123.txt",dstPath ));
//       Q_ASSUME(QFile::copy("C:/Users/PAPPU KUMAR KESHARI/OneDrive/Desktop/New folder/Source/dialog.cpp",dstPath ));

}

