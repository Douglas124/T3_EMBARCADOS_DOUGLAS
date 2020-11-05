#ifndef ACESSO_H
#define ACESSO_H

#include <QMainWindow>
#include <QSerialPort>

QT_BEGIN_NAMESPACE
namespace Ui { class Acesso; }
QT_END_NAMESPACE

class Acesso : public QMainWindow
{
    Q_OBJECT

public:
    Acesso(QWidget *parent = nullptr);
    ~Acesso();

private slots:


    void timer_teste();

private:
    Ui::Acesso *ui;
    QSerialPort *serial;
};
#endif // ACESSO_H
