#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void readData();
    void timer_teste();

    void on_BOTAO_ENVIA_clicked();

    void on_BOTAO_CONN_clicked();

    void on_BOTAO_LERDADOS_clicked();

    void on_BOTAO_APAGA_clicked();

    void on_BOTAO_LIMPA_clicked();

private:
    Ui::MainWindow *ui;
    QSerialPort *serial;
};

#endif // MAINWINDOW_H
