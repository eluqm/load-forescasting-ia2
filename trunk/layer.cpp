#include "layer.h"

Layer::Layer()
{
}
void Layer::Initialize(unsigned long size) {   //Initialize the layer
    Neurons = new Neuron [size];

}
Layer::~Layer(){ //destructor deletes Neurons from the memory
    delete Neurons;
}
Neuron Layer::GetNeuron(unsigned long index){  //Give the neuron at index
    return Neurons[index];
}
void Layer::SetNeuron(Neuron neuron,unsigned long index){ //sets the neuron
    Neurons[index]=neuron;
}
