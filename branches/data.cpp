#include "data.h"
#include <vector>
#include <iostream>
//template <typename T>
Data::Data()
{
    //inputs(i,vector<long double>(j));
    //outputs(i,vector<long double>(1));
}
//template <typename T>
vector<vector<long double> > & Data::getInputs()
{
                  return inputs;
                  }
//template <typename T>
vector<vector<long double> > & Data::getOutputs()
{
                  return outputs;
                  }
//template <typename T>
void Data::setInputs(vector<vector<long double> > &in)
{
                  inputs=in;
                  }
//template <typename T>
void Data::setOutputs(vector<vector<long double> > &out)
{
                  outputs=out;
                  }

//template <typename T>
void Data::upData(int i,int j)//j=cuantos parametros tiene actualmente la data
{   vector<vector<long double> >inputs2(i,vector<long double>(j));
    vector<vector<long double> >outputs2(i,vector<long double>(1));


            ifstream it("input.dat");
            ifstream it2("output.dat");
            ofstream asd("resultado_proyecto.dat");
            ofstream numeros("prueba.dat");

            for (int u=0;u<inputs2.size();u++)
            {for(int j=0;j<inputs2[0].size();j++)
                {numeros<<46*1.234<<'\t';}numeros<<endl;}

            for (int u=0;u<inputs2.size();u++)
            {for(int j=0;j<inputs2[0].size();j++)
            {it>>inputs2[u][j];}}

            for (int u=0;u<outputs2.size();u++)
            {for(int j=0;j<outputs2[0].size();j++)
            {it2>>outputs2[u][j];}}

            for (int u=0;u<inputs2.size();u++)
            {for(int j=0;j<inputs2[0].size();j++)
                {asd<<inputs2[u][j]<<'\t';}
            asd<<endl;
            }

            /*cout<<"ENTRADAS"<<endl;
            for (int u=0;u<matriz.size();u++)
            {for(int j=0;j<matriz[0].size();j++)
            cout<<decimals(3)<<matriz[u][j]<<'\t';
            cout<<endl;
            }
            //cout<<"SALIDAS"<<endl;
            for (int u=0;u<matrizout.size();u++)
            {for(int j=0;j<matrizout[0].size();j++)
            cout<<decimals(3)<<matrizout[u][j]<<'\t';
            cout<<endl;
            }*/
            inputs=inputs2;
            outputs=outputs2;
            it.close();
            it2.close();


}
string Data::doubletoString(long double my)
{
    stringstream b;
    b<<my;
    return b.str();

}
