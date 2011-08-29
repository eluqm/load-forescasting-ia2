#ifndef LAYER_H
#define LAYER_H
#include "neuron.h"

class Layer
{
public:
    Neuron *Neurons; //Pointer to array of neurons

                 /*Layer(unsigned long size=1){    //size is no. of neurons in it
                 Neurons = new Neuron [size];
                           }  */
   void Initialize(unsigned long size);
   Neuron GetNeuron(unsigned long index);
   void SetNeuron(Neuron neuron,unsigned long index);
    Layer();
    ~Layer();
};

#endif // LAYER_H
