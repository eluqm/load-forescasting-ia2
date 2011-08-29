#ifndef NEURON_H
#define NEURON_H
#include "dendrite.h"
class Neuron
{
public:
    unsigned long n_ID; //ID of a particular neuron in a layer
    //Used to find a particular neuron in an array
    double n_value; //Value which Neuron currently is holding
    double n_bias;  //Bias of the neuron
    double n_delta; //Used in back  prop. Note it is backprop specific
    Dendrite *Dendrites; //Dendrites
    Neuron(unsigned long ID=0,double value=0.0,double bias=0.0);
    void SetDendrites(unsigned long dendrite);
};

#endif // NEURON_H
