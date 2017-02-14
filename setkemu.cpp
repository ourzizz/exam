#include "setkemu.h"
#include "ui_setkemu.h"

SetKeMu::SetKeMu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SetKeMu)
{
    ui->setupUi(this);
}

SetKeMu::~SetKeMu()
{
    delete ui;
}
