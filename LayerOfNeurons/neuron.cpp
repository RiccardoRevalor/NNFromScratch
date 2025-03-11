/*
Implementation of a simple neuron to understand the NN from the ground up
*/

#include "neuron.h" //Neuron header defined in neuron.h

using namespace std;

//Neuron constructor
Neuron::Neuron(const vector<double> &weights, double bias)
    : weights(weights), bias(bias) {}




//function to calculate the output of the Neuron
double Neuron::getOutput(const vector<double> &inputs){
    double acc = 0; //accumulator to calculate the output
    //iterate over the inputs and weights to calculate the output
    //at every iteration i, calculate inputs[i] * weights[i] and add it to the accumulator

    for (size_t i = 0; i < inputs.size(); i++){
        acc += inputs[i] * Neuron::weights[i];
    }

    //then add the bias to the accumulator
    return acc + Neuron::bias;
}

