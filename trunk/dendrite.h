#ifndef DENDRITE_H
#define DENDRITE_H

class Dendrite
{
public:

    double d_weight; //peso de la neurona
    unsigned long d_points_to; //indice a la  neurona de la siguiente ccapa a la que apunta
    Dendrite(double weigth=0.0,unsigned long points_to=0);

};

#endif // DENDRITE_H
