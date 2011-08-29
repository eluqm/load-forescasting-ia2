#ifndef CROMOSOME_H
#define CROMOSOME_H
#include <vector>

class Cromosome
{
public:
    vector<int> gen;
    unsigned int fitness;
    Cromosome();
    unsigned int getFitness();
    void setFitness();

};

#endif // CROMOSOME_H
