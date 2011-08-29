#ifndef NETWORK_H
#define NETWORK_H
#include "layer.h"
#include <vector>
using namespace std;
class Network
{
public:
    double net_learning_rate; //Learning rate of network
    Layer *Layers; //The total layers in network
    unsigned long net_tot_layers; //Number of layers
    double *net_inputs; //Input array
    double *net_outputs;//Output layers
    unsigned long *net_layers; //Array which tells no. of neurons in each layer
    //double GetRand(void);


    Network();
    int SetData(double learning_rate,unsigned long layers[],unsigned long tot_layers);
    int SetInputs(vector<long double> inputs);
    void RandomizeWB(void);

    double * GetOutput(void);

    void Update(void);

    /* void SetOutputs(double outputs[]){ //Set the values of the output layer
                    for(int i=0;i<net_layers[net_tot_layers-1];i++){
                            Layers[net_tot_layers-1].Neurons[i].n_value=outputs[i]; //Set the value
                            }
                           }  */


    double Limiter(double value);
    double GetRand(void);

    double SigmaWeightDelta(unsigned long layer_no, unsigned long neuron_no);
    /*For output layer:

    Delta = (TargetO - ActualO) * ActualO * (1 - ActualO)
    Weight = Weight + LearningRate * Delta * Input

    For hidden layers:

    Delta =  ActualO * (1-ActualO) * Summation(Weight_from_current_to_next AND Delta_of_next)
    Weight = Weight + LearningRate * Delta * Input
    */


    int Train(vector<long double > inputs,vector<long double > outputs);
    ~Network();


};

#endif // NETWORK_H
