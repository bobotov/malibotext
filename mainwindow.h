#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QPrinter>
#include <QPrintDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionYeni_triggered();

    void on_actionA_triggered();

    void on_actionFarkl_Kaydet_triggered();

    void on_actionKopyala_triggered();

    void on_actionYap_t_r_triggered();

    void on_actionKes_triggered();

    void on_actionGeri_al_triggered();

    void on_actionYeniden_yap_triggered();

private:
    Ui::MainWindow *ui;
    QString currentfile = "";
};
#endif // MAINWINDOW_H
