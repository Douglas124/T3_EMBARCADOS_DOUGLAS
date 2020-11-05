#include "acesso.h"
#include "ui_acesso.h"
#include <QTimer> // adiciona um timer
#include <QSerialPort>
#include <QtDebug>
#include <time.h>

struct tm * timeinfo;

QTimer *timer = new QTimer(); //cria novo timer

typedef struct{
  char nome[20];
  char cargo[20];
  char matricula[10];
  char hora_entrada[10];
  char data_entrada[10];
  char hora_saida[10];
  char data_saida[10];
  char fim = '.';
}estrutura;

estrutura usuario;


QTimer *timer = new QTimer(); // cria novo timer

Acesso::Acesso(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Acesso){
    ui->setupUi(this);
    connect(timer, SIGNAL(timeout()), SLOT(timer_teste()));
}

Acesso::~Acesso(){
    delete ui;
}

void Acesso:: timer_teste(){
    static int cont =0;
    ui->lcd1->display(cont);
    cont++;
}

