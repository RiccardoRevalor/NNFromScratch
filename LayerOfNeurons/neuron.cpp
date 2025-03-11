/*
Implementation of a simple neuron to understand the NN from the ground up
*/

#include "neuron.h" //Neuron header defined in neuron.h

#include <numeric>  //used for inner_product

using namespace std;

//Dot Production is more efficient than the for loop -> this is like the dot product in numpy
double dotProduct(const vector<double> &v1, const vector<double> &v2){
    return inner_product(v1.begin(), v1.end(), v2.begin(), 0.0);
}

//Neuron constructor
Neuron::Neuron(const vector<double> &weights, double bias)
    : weights(weights), bias(bias) {}




//function to calculate the output of the Neuron
double Neuron::getOutput(const vector<double> &inputs){
    double acc = 0; //accumulator to calculate the output
    //iterate over the inputs and weights to calculate the output
    //at every iteration i, calculate inputs[i] * weights[i] and add it to the accumulator


    /* Before using dot product
    for (size_t i = 0; i < inputs.size(); i++){
        acc += inputs[i] * Neuron::weights[i];    

    }
    */

    //use dot product to calculate the output in a more efficient way
    acc = dotProduct(inputs, Neuron::weights);

    //then add the bias to the accumulator
    return acc + Neuron::bias;
}

