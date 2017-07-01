/*************************************************
 *                                               *
 *   Author: Danilo Carrabino                    *
 *                                               *
 *************************************************/


#include "harmonizemainwindow.h"
#include "ui_harmonizemainwindow.h"

HarmonizeMainWindow::HarmonizeMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HarmonizeMainWindow)
{
    ui->setupUi(this);
}

HarmonizeMainWindow::~HarmonizeMainWindow()
{
    delete ui;
}
