#include "campo.h"
#include "ui_campo.h"

#include <QDebug>

Campo::Campo(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Campo)
{
    ui->setupUi(this);

    // inicializando nome dos botões no estilo de matriz pra ficar mais fácil de
    // entender

    M1.button = "00";
    M1.is_blocked = false;
    M2.button = "01";
    M2.is_blocked = false;
    M3.button = "02";
    M3.is_blocked = false;
    M4.button = "10";
    M4.is_blocked = false;
    M5.button = "11";
    M5.is_blocked = false;
    M6.button = "12";
    M6.is_blocked = false;
    M7.button = "20";
    M7.is_blocked = false;
    M8.button = "21";
    M8.is_blocked = false;
    M9.button = "22";
    M9.is_blocked = false;
}

Campo::~Campo()
{
    delete ui;
}

void Campo::showField(){

    Pos currentPosition;
    currentPosition.x = 10;
    currentPosition.y = 10;
    currentPosition.w = 150;
    currentPosition.h = 150;
    int count=0;

    for (int i = 0; i < m_listPushButton.size(); ++i) {
        m_listPushButton[i]->setGeometry(currentPosition.x, currentPosition.y, currentPosition.w , currentPosition.h);
        currentPosition.x += 164;
        m_listPushButton[i]->show();
        count++;
        if(count == 3){
            count =0;
            currentPosition.y += 164;
            currentPosition.x = 10;
        }
    }
}

void Campo::createWidgets(QMainWindow *w){

    //criando botões e agrupando no qvector para ter fácil acesso
    QPushButton* btn_00 = new QPushButton(w);
    m_listPushButton.push_back(btn_00);

    QPushButton* btn_01 = new QPushButton(w);
    m_listPushButton.push_back(btn_01);

    QPushButton* btn_02 = new QPushButton(w);
    m_listPushButton.push_back(btn_02);

    QPushButton* btn_10 = new QPushButton(w);
    m_listPushButton.push_back(btn_10);

    QPushButton* btn_11 = new QPushButton(w);
    m_listPushButton.push_back(btn_11);

    QPushButton* btn_12 = new QPushButton(w);
    m_listPushButton.push_back(btn_12);

    QPushButton* btn_20 = new QPushButton(w);
    m_listPushButton.push_back(btn_20);

    QPushButton* btn_21 =new QPushButton(w);
    m_listPushButton.push_back(btn_21);

    QPushButton* btn_22 = new QPushButton(w);
    m_listPushButton.push_back(btn_22);

}

// Método que vai mudar de qual jogardor é a vez

void Campo::changeJogador(){
    switch (m_jogador) {
    case 1:
        m_jogador = 2;
        m_marca = "O";
        qDebug() << "jogador: " << QString::number(m_jogador);
        emit sendChangedPlayer(m_jogador);
        break;
    case 2:
        m_jogador = 1;
        m_marca = "x";
        qDebug() << "jogador: " << QString::number(m_jogador);
        emit sendChangedPlayer(m_jogador);
        break;
    default:
        break;
    }
}

// void Campo::verifyWhenPlay(){
//     if(m_jogador == 1){
//         changeJogador();
//         qDebug() << "jogador: " << QString::number(m_jogador);
//     }
// }

void Campo::openSignals(){
    for (int i = 0; i < m_listPushButton.size(); ++i) {
        connect(m_listPushButton[i], SIGNAL(clicked()), this, SLOT(changeJogador()));
    }
}

void Campo::sortSlots(){
    connect(m_listPushButton[0], SIGNAL(clicked(bool)),this, SLOT(on_clicked_btn_00()));
    connect(m_listPushButton[1], SIGNAL(clicked(bool)),this, SLOT(on_clicked_btn_01()));
    connect(m_listPushButton[2], SIGNAL(clicked(bool)),this, SLOT(on_clicked_btn_02()));
    connect(m_listPushButton[3], SIGNAL(clicked(bool)),this, SLOT(on_clicked_btn_10()));
    connect(m_listPushButton[4], SIGNAL(clicked(bool)),this, SLOT(on_clicked_btn_11()));
    connect(m_listPushButton[5], SIGNAL(clicked(bool)),this, SLOT(on_clicked_btn_12()));
    connect(m_listPushButton[6], SIGNAL(clicked(bool)),this, SLOT(on_clicked_btn_20()));
    connect(m_listPushButton[7], SIGNAL(clicked(bool)),this, SLOT(on_clicked_btn_21()));
    connect(m_listPushButton[8], SIGNAL(clicked(bool)),this, SLOT(on_clicked_btn_22()));
}

// Linha 1
void Campo::on_clicked_btn_00(){
    m_listPushButton[0]->setText(getMarca());
    M1.marca = getMarca();
    M1.is_blocked = true;
    m_listPushButton[0]->setEnabled(false);
}
void Campo::on_clicked_btn_01(){
    m_listPushButton[1]->setText(getMarca());
    M2.marca = getMarca();
    M2.is_blocked = true;
    m_listPushButton[1]->setEnabled(false);

}
void Campo::on_clicked_btn_02(){
    m_listPushButton[2]->setText(getMarca());
    M3.marca = getMarca();
    M3.is_blocked = true;
    m_listPushButton[2]->setEnabled(false);

}

// Linha 2
void Campo::on_clicked_btn_10(){

    m_listPushButton[3]->setText(getMarca());
    M4.marca = getMarca();
    M4.is_blocked = true;
    m_listPushButton[3]->setEnabled(false);

}
void Campo::on_clicked_btn_11(){
    m_listPushButton[4]->setText(getMarca());
    M5.marca = getMarca();
    M5.is_blocked = true;
    m_listPushButton[4]->setEnabled(false);

}
void Campo::on_clicked_btn_12(){
    m_listPushButton[5]->setText(getMarca());
    M6.marca = getMarca();
    M6.is_blocked = true;
    m_listPushButton[5]->setEnabled(false);

}

// Linha 3
void Campo::on_clicked_btn_20(){
    m_listPushButton[6]->setText(getMarca());
    M7.marca = getMarca();
    M7.is_blocked = true;
    m_listPushButton[6]->setEnabled(false);

}
void Campo::on_clicked_btn_21(){
    m_listPushButton[7]->setText(getMarca());
    M8.marca = getMarca();
    M8.is_blocked = true;
    m_listPushButton[7]->setEnabled(false);

}
void Campo::on_clicked_btn_22(){
    m_listPushButton[8]->setText(getMarca());
    M9.marca = getMarca();
    M9.is_blocked = true;
    m_listPushButton[8]->setEnabled(false);
}



