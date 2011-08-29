#ifndef DATA_H
#define DATA_H
#include<vector>
#include <fstream>
#include <sstream>
#include <QString>
using namespace std;
//template <typename T>
class Data
{
private:
    vector<vector<long double> >inputs;
    vector<vector<long double> >outputs;
public:
    Data();
    vector<vector<long double> > & getInputs();
    void setInputs(vector<vector<long double> > &in);
    vector<vector<long double> > & getOutputs();
    void setOutputs(vector<vector<long double> > &out);
    void upData(int j,int i);
    string doubletoString(long double my)
    ;

};

#endif // DATA_H
