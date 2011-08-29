#ifndef PLOTTAB_H
#define PLOTTAB_H

#include <QWidget>
#include <qwt_plot.h>
#include <qwt_plot_curve.h>

namespace Ui {
    class plotTab;
}

class plotTab : public QWidget
{
    Q_OBJECT

public:
    explicit plotTab(QWidget *parent = 0);
    ~plotTab();

private:
    Ui::plotTab *ui;
    QwtPlot *plot;
    QwtPlotCurve *signal;
    //plotTab * curva;
public slots:
    void dibujarPlot();

};

#endif // PLOTTAB_H
