#ifndef CAMPO_H
#define CAMPO_H

#include <QWidget>
#include <QPushButton>
#include <QVector>
#include <QMainWindow>

namespace Ui {
class Campo;
}

class Campo : public QWidget
{
    Q_OBJECT


public:
    struct matrix_btn{
        QString marca;
        QString button;
        bool is_blocked;
    };
    typedef matrix_btn Matrix;
    struct position
    {
        int x;
        int y;
        int w;
        int h;
    };
    typedef position Pos;
    explicit Campo(QWidget *parent = nullptr);
    ~Campo();
    void showField();
    void createWidgets(QMainWindow *w);
    QString getMarca(){return m_marca;}
    int getJogador(){return m_jogador;}
    // void verifyWhenPlay();
    void openSignals();
    void sortSlots();



public slots:
    void changeJogador();

    void on_clicked_btn_00();
    void on_clicked_btn_01();
    void on_clicked_btn_02();
    void on_clicked_btn_10();
    void on_clicked_btn_11();
    void on_clicked_btn_12();
    void on_clicked_btn_20();
    void on_clicked_btn_21();
    void on_clicked_btn_22();

signals:
    void sendChangedPlayer(int);
private:
    Ui::Campo *ui;
    QVector<QPushButton *> m_listPushButton;
    int m_jogador = 1;
    QString m_marca = "X";
    Matrix M1;
    Matrix M2;
    Matrix M3;
    Matrix M4;
    Matrix M5;
    Matrix M6;
    Matrix M7;
    Matrix M8;
    Matrix M9;


};

#endif // CAMPO_H
