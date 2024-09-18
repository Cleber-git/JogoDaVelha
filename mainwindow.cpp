#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);


    field = new Campo();
    field->createWidgets(this);
    field->openSignals();
    field->showField();
    m_lblJogador = new QLabel(this);
    m_lblJogador->setText("Jogador: " + QString::number(field->getJogador()));
    m_lblJogador->setStyleSheet("color: green ;");
    m_lblJogador->move(10, 475);
    m_lblJogador->show();

    connect(field, SIGNAL(sendChangedPlayer(int)), this,
            SLOT(receiverChangedPlayer(int)));
    field->sortSlots();
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::receiverChangedPlayer(int player) {
    m_lblJogador->setText("Jogador: " + QString::number(player));
}
