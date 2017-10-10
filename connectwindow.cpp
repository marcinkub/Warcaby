#include "connectwindow.h"
#include "ui_connectwindow.h"
#include "gamewindow.h"

ConnectWindow::ConnectWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ConnectWindow)
{
    ui->setupUi(this);
    this->setFixedSize(185,300);
    this->setWindowTitle("Konfiguracja polaczenia");
}

ConnectWindow::~ConnectWindow()
{
    delete ui;
}

void ConnectWindow::on_btn_polacz_clicked()
{
    this->hide();
    GameWindow GW;
    GW.setModal(true);
    GW.exec();

        //GW.exec();



}
