#include "neuron.h"

Neuron::Neuron(unsigned long ID,double value,double bias)
{

    n_ID=ID;
    n_value=value;
    n_bias=bias;
    n_delta=0.0;
}
void Neuron::SetDendrites(unsigned long dendrite)
{
    Dendrites=new Dendrite[dendrite];
    for(unsigned int i=0;i<dendrite;i++){
        Dendrites[i].d_points_to=i; // Initialize the dendrite to attach to next layer
    }
}
