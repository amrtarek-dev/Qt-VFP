#include "mainview.h"
#include "./ui_mainview.h"
#include "setuptab.h"

MainView::MainView(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainView)
{
    ui->setupUi(this);
    auto setup_tap_w = new SetupTab(this);
    ui->loSetupTab->addWidget(setup_tap_w);
}

MainView::~MainView()
{
    delete ui;
}

