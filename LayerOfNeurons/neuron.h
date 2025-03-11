/* Neuron Header */

#ifndef NEURON_H
#define NEURON_H

#include <vector>

//Neuron class
class Neuron {

    private:
        std::vector<double> weights;                                //Neuron weights
        double bias;                                                //Neuron bias

    public:
        Neuron(const std::vector<double> &weights, double bias);    //Neuron constrctor
        double getOutput(const std::vector<double> &inputs);        //function to calculate the output of the Neuron

};



#endif // NEURON_H