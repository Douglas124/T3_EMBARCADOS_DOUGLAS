/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *BOTAO_CONN;
    QPushButton *BOTAO_ENVIA;
    QLineEdit *LE_NOME;
    QLabel *label_STSPORTA;
    QLabel *label_NOME;
    QLabel *TITULO_JANELA;
    QLabel *label_MATRICULA;
    QLabel *label_CARGO;
    QLabel *label_ENTRADA;
    QLabel *label_SAIDA;
    QLineEdit *LE_MATRICULA;
    QLineEdit *LE_CARGO;
    QLineEdit *LE_ENTRADA;
    QLineEdit *LE_SAIDA;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        BOTAO_CONN = new QPushButton(centralWidget);
        BOTAO_CONN->setObjectName(QString::fromUtf8("BOTAO_CONN"));
        BOTAO_CONN->setGeometry(QRect(20, 330, 75, 23));
        BOTAO_ENVIA = new QPushButton(centralWidget);
        BOTAO_ENVIA->setObjectName(QString::fromUtf8("BOTAO_ENVIA"));
        BOTAO_ENVIA->setGeometry(QRect(280, 330, 75, 23));
        LE_NOME = new QLineEdit(centralWidget);
        LE_NOME->setObjectName(QString::fromUtf8("LE_NOME"));
        LE_NOME->setGeometry(QRect(120, 80, 251, 20));
        label_STSPORTA = new QLabel(centralWidget);
        label_STSPORTA->setObjectName(QString::fromUtf8("label_STSPORTA"));
        label_STSPORTA->setGeometry(QRect(50, 420, 141, 16));
        label_NOME = new QLabel(centralWidget);
        label_NOME->setObjectName(QString::fromUtf8("label_NOME"));
        label_NOME->setGeometry(QRect(30, 80, 47, 13));
        TITULO_JANELA = new QLabel(centralWidget);
        TITULO_JANELA->setObjectName(QString::fromUtf8("TITULO_JANELA"));
        TITULO_JANELA->setGeometry(QRect(140, 10, 301, 51));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        TITULO_JANELA->setFont(font);
        label_MATRICULA = new QLabel(centralWidget);
        label_MATRICULA->setObjectName(QString::fromUtf8("label_MATRICULA"));
        label_MATRICULA->setGeometry(QRect(30, 110, 81, 16));
        label_CARGO = new QLabel(centralWidget);
        label_CARGO->setObjectName(QString::fromUtf8("label_CARGO"));
        label_CARGO->setGeometry(QRect(30, 140, 47, 13));
        label_ENTRADA = new QLabel(centralWidget);
        label_ENTRADA->setObjectName(QString::fromUtf8("label_ENTRADA"));
        label_ENTRADA->setGeometry(QRect(30, 170, 91, 16));
        label_SAIDA = new QLabel(centralWidget);
        label_SAIDA->setObjectName(QString::fromUtf8("label_SAIDA"));
        label_SAIDA->setGeometry(QRect(30, 200, 81, 16));
        LE_MATRICULA = new QLineEdit(centralWidget);
        LE_MATRICULA->setObjectName(QString::fromUtf8("LE_MATRICULA"));
        LE_MATRICULA->setGeometry(QRect(120, 110, 251, 20));
        LE_CARGO = new QLineEdit(centralWidget);
        LE_CARGO->setObjectName(QString::fromUtf8("LE_CARGO"));
        LE_CARGO->setGeometry(QRect(120, 140, 251, 20));
        LE_ENTRADA = new QLineEdit(centralWidget);
        LE_ENTRADA->setObjectName(QString::fromUtf8("LE_ENTRADA"));
        LE_ENTRADA->setGeometry(QRect(120, 170, 251, 20));
        LE_SAIDA = new QLineEdit(centralWidget);
        LE_SAIDA->setObjectName(QString::fromUtf8("LE_SAIDA"));
        LE_SAIDA->setGeometry(QRect(120, 200, 251, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        BOTAO_CONN->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        BOTAO_ENVIA->setText(QCoreApplication::translate("MainWindow", "Write", nullptr));
        label_STSPORTA->setText(QCoreApplication::translate("MainWindow", "Status da Porta : FECHADA", nullptr));
        label_NOME->setText(QCoreApplication::translate("MainWindow", "NOME:", nullptr));
        TITULO_JANELA->setText(QCoreApplication::translate("MainWindow", "PONTO ELETRONICO", nullptr));
        label_MATRICULA->setText(QCoreApplication::translate("MainWindow", "MATRICULA:", nullptr));
        label_CARGO->setText(QCoreApplication::translate("MainWindow", "CARGO:", nullptr));
        label_ENTRADA->setText(QCoreApplication::translate("MainWindow", "Ultima ENTRADA:", nullptr));
        label_SAIDA->setText(QCoreApplication::translate("MainWindow", "Ultima SAIDA:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
