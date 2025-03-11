/*
Implementation of a simple neuron to understand the NN from the ground up
*/

#include "layer.h"

using namespace std;

//Layer constructor
Layer::Layer(vector<vector<double>> &neuronsWeights, vector<double> &neuronsBiases){
    //for every i going from 0 to the number of neurons, use emplace_back to put a new Neuron, wich is a combination of a weights vector and a bias, 
    //into the neurons vectors without excplicitly creating it
    //it is more efficient this way!

    /*
    Minimal documentation: std::vector<T,Allocator>::emplace_back
    Appends a new element to the end of the container. 
    The element is constructed through std::allocator_traits::construct, 
    which typically uses placement-new to construct the element in-place at the location provided by the container.
    */

    for (size_t i = 0; i < neuronsWeights.size(); i++){
        Layer::neurons.emplace_back(neuronsWeights[i], neuronsBiases[i]);
    }
    
}

//function to calculate the output vector of the Layer
vector<double> Layer::getOutputs(vector<vector<double>> &inputs) {

    //simply call the Neuron::getOutput(vector<double> inputs) function for each Neuron composing the Layer
    //all the results are stored in the Layer output vector, at position i there's the result related to the i-th Neuron

    vector<double> outputs;

    for (size_t i = 0; i < neurons.size(); i++){
        outputs.emplace_back(neurons[i].getOutput(inputs[i]));
    }

    return outputs;
}