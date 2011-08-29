#include "interfaze.h"
#include "ui_interfaze.h"
#include "data.h"
#include "utiles.h"
#include<cmath>
#include <iostream>
#include <sstream>
using namespace std;
Interfaze::Interfaze(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Interfaze)



{
    ui->setupUi(this);
    //ui->layout()->addWidget(plot);
    //ui->centralWidget->layout()->addWidget(plot);
   // ui->centralWidget->layout()->addWidget(plot);
   // signal->attach(plot);

}

Interfaze::~Interfaze()
{

   // delete signal;
  //  delete plot;
    delete ui;
}
void Interfaze::setSize()
{

    ui->Tabla->setRowCount(dat->getInputs().size());
    ui->Tabla->setColumnCount(4);
    ofstream puntero("mostrar.dat");
    string s="";
    //std::stringstream ss;
    QString str=" ";
    //QDoubleValidator *FovValidator = new QDoubleValidator(10.00, 100.00, 2, line);
    //line->setValidator( new QDoubleValidator(10.00, 100.00, 2, line) );
    for(int p=0;p<dat->getInputs().size();p++){
    //QTableWidgetItem *item=new QTableWidgetItem();

        for(int m=0;m<4;m++){

        ui->Tabla->setItem(p,m,new QTableWidgetItem());
       // ss<<dat->getInputs()[p][m];

        s=dat->doubletoString(dat->getInputs()[p][m]);
        str=s.c_str();
        puntero<<s<<'\t';
        ui->Tabla->item(p,m)->setText(str);
      // item->data(dat->getInputs()[p][m]);
    //ui->Tabla->setItem(p,m,item);
    }
    //delete item;
        puntero<<endl;
    }

}

void Interfaze::fillbar()

{   //ui->barra->setRange(0,100);
    my=new Network();
    dat=new Data();
    dat->upData(100,4);
    linearScale sc;
            sc.getScale(1,24,0,1,1,dat->getInputs());
            sc.getScale(20000,60000,0,1,0,dat->getInputs());
            sc.getScale(20000,60000,0,1,2,dat->getInputs());
            sc.getScale(20000,60000,0,1,3,dat->getInputs());
            sc.getScale(20000,60000,0,1,0,dat->getOutputs());


    //dat->upData();

    //ui->barra->setMinimum(0);
    //int valor=0;
    //function();

    //ui->barra->setMaximum(0);

   // ui->barra->setMaximum(1000);

    for(int u=0;u<dat->getInputs().size();u++)
    {
        ui->barra->setValue(u*1000/ui->barra->maximum());}
}
void Interfaze::mostrarVentanaCurva()
{   curva = new plotTab;

    curva->show();
}
void Interfaze::prediceCarga()
{
    cout<<"....."<<endl;

}


void Interfaze::on_actionGraficar_triggered()
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

    //signal->setData(t,y,100);
    //plot->replot();
}

void Interfaze::on_pushButton_clicked()
{
    curva=new plotTab;
   // curva->bibujarPlot();
    curva->dibujarPlot();
    curva->show();
}
