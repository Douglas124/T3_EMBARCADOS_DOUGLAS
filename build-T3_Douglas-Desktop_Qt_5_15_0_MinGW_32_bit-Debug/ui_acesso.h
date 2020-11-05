/********************************************************************************
** Form generated from reading UI file 'acesso.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACESSO_H
#define UI_ACESSO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Acesso
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QDial *pot1;
    QLCDNumber *lcd1;
    QSlider *potslider1;
    QLCDNumber *lcd2;
    QLineEdit *LE1;
    QLineEdit *LE2;
    QPushButton *pushButton_2;
    QSpinBox *spinBox;
    QCheckBox *checkBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Acesso)
    {
        if (Acesso->objectName().isEmpty())
            Acesso->setObjectName(QString::fromUtf8("Acesso"));
        Acesso->resize(600, 400);
        centralwidget = new QWidget(Acesso);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 30, 101, 51));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 82, 14);\n"
"background-color: rgb(100, 255, 65);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 10, 161, 71));
        pot1 = new QDial(centralwidget);
        pot1->setObjectName(QString::fromUtf8("pot1"));
        pot1->setGeometry(QRect(40, 90, 91, 91));
        lcd1 = new QLCDNumber(centralwidget);
        lcd1->setObjectName(QString::fromUtf8("lcd1"));
        lcd1->setGeometry(QRect(260, 100, 81, 61));
        lcd1->setDigitCount(2);
        potslider1 = new QSlider(centralwidget);
        potslider1->setObjectName(QString::fromUtf8("potslider1"));
        potslider1->setGeometry(QRect(20, 200, 160, 16));
        potslider1->setOrientation(Qt::Horizontal);
        lcd2 = new QLCDNumber(centralwidget);
        lcd2->setObjectName(QString::fromUtf8("lcd2"));
        lcd2->setGeometry(QRect(260, 180, 81, 61));
        lcd2->setDigitCount(2);
        LE1 = new QLineEdit(centralwidget);
        LE1->setObjectName(QString::fromUtf8("LE1"));
        LE1->setGeometry(QRect(20, 260, 141, 71));
        LE2 = new QLineEdit(centralwidget);
        LE2->setObjectName(QString::fromUtf8("LE2"));
        LE2->setGeometry(QRect(170, 260, 141, 71));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 260, 75, 51));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(390, 110, 171, 91));
        QFont font1;
        font1.setPointSize(45);
        spinBox->setFont(font1);
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(320, 320, 70, 17));
        Acesso->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Acesso);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 21));
        Acesso->setMenuBar(menubar);
        statusbar = new QStatusBar(Acesso);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Acesso->setStatusBar(statusbar);

        retranslateUi(Acesso);

        QMetaObject::connectSlotsByName(Acesso);
    } // setupUi

    void retranslateUi(QMainWindow *Acesso)
    {
        Acesso->setWindowTitle(QCoreApplication::translate("Acesso", "Acesso", nullptr));
        pushButton->setText(QCoreApplication::translate("Acesso", "ENTRA", nullptr));
        label->setText(QCoreApplication::translate("Acesso", "kkkkkk", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Acesso", "MANDA", nullptr));
        checkBox->setText(QCoreApplication::translate("Acesso", "CheckBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Acesso: public Ui_Acesso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACESSO_H
