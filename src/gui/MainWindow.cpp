#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <UtilsLib/UtilsLib.h>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle(UtilsLib::Random::getRandomString(15).c_str());
}

MainWindow::~MainWindow()
{
    delete ui;
}
