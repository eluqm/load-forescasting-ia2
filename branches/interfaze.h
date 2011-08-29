#ifndef INTERFAZE_H
#define INTERFAZE_H

#include <QMainWindow>
#include <QProgressBar>
#include <qwt_plot.h>
#include <qwt_plot_curve.h>
#include <plottab.h>
#include "data.h"
#include "network.h"
namespace Ui {
    class Interfaze;
}

class Interfaze : public QMainWindow
{
    Q_OBJECT

public:
    explicit Interfaze(QWidget *parent = 0);
    ~Interfaze();

private:
    Ui::Interfaze *ui;
    //QwtPlot *plot;
   // QwtPlotCurve *signal;
    plotTab * curva;
    Data *dat;
    Network *my;

private slots:
    void mostrarVentanaCurva();
    void fillbar();
    void setSize();
    void prediceCarga();
    //void on_actionGraficar_triggered();
    void on_actionGraficar_triggered();
    void on_pushButton_clicked();
};

#endif // INTERFAZE_H
