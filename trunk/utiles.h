#ifndef UTILES_H
#define UTILES_H
#include<vector>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <fstream>
using namespace std;
class Utiles
{
public:
    Utiles();
};
class linearScale
{
public:
    linearScale();
    void getScale(long double a,long double b,long double r,long double e,int t,vector<vector<long double> > &);
};
class decimals
{public:
    std::streamsize d;
      explicit decimals(std::streamsize d = 2) : d(d) {}

};


#endif // UTILES_H
