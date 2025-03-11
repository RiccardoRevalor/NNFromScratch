/* Layer Header */

#ifndef LAYER_H
#define LAYER_H


#include <vector>
#include "neuron.h"

//Layer class
class Layer {

    private:
        std::vector<Neuron> neurons;        //Neurons composing the Lyer


    public:
        Layer(std::vector<std::vector<double>> &neuronsWeights, std::vector<double> &neuronsBiases);     //Layer constructor
        std::vector<double> getOutputs(std::vector<std::vector<double>> &inputs);                        //function to calculate the output vector of the Layer


};



#endif //LAYER_H