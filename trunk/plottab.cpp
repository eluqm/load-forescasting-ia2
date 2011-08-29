#include "plottab.h"
#include "ui_plottab.h"

 plotTab::plotTab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::plotTab),
      plot(new QwtPlot(this)),
      signal(new QwtPlotCurve("Señal"))
{
    ui->setupUi(this);
    //ui->plotTab->layout()->addWidget(plot);
    ui->verticalLayout->addWidget(plot);
    signal->attach(plot);
}

plotTab::~plotTab()
{
    delete ui;
   // delete curva;
    delete plot;
    delete signal;
}
void plotTab::dibujarPlot()
{
    static double fase=10;
    fase+=10;
    //QwtSeriesData<double> series;
    double t[100];
    double y[100];
    for(int i=0;i<100;i++)
    {
        t[i]=i;y[i]=(3*sin(M_2_PI*5*t[i]+fase));
    }

    signal->setData(t,y,100);
    plot->replot();

}
