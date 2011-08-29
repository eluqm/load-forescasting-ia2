#include "utiles.h"

Utiles::Utiles()
{


}
linearScale::linearScale()
{}
void linearScale::getScale(long double a,long double b,long double c,long double d,int column,vector<vector<long double> >&vect)
{

    double r1=b-a;
    double r2=d-c;
    cout<<r1<<endl;
    cout<<r2<<endl;
    for(int u=0;u<vect.size();u++)
    {   //cout<<long double(((b*c)-(a*d))/r1)<<endl;
        vect[u][column]=(((b*c)-(a*d))/r1)+(vect[u][column]*(r2/r1));

        }


}

std::ostream& operator<< (std::ostream& stream, decimals d) {
   stream.flags(stream.flags() | std::ios::fixed);
   stream.precision(d.d);
   return stream;
}
