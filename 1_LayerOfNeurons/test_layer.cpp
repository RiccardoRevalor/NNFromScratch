#include <iostream>
#include <vector>
#include "layer.h"

#define NUM_NEURONS 3


using namespace std;

int main(void){

    //3 neurons in the layer
    const vector<double> weights0 = {0.2, 0.8, -0.5};
    const vector<double> inputs0 = {1, 2, 3};
    const double bias0 = 2;

    const vector<double> weights1 = {0.3, 0.7, -0.1};
    const vector<double> inputs1 = {1.2, 2.3, 7.2};
    const double bias1 = 3;

    const vector<double> weights2 = {0.1, -0.6, 1.0};
    const vector<double> inputs2 = {3, 10, 11.7};
    const double bias2 = 1;

    vector<vector<double>> weights = {weights0, weights1, weights2};
    vector<double> biases = {bias0, bias1, bias2};


    //Layer(std::vector<std::vector<double>> &neuronsWeights, std::vector<double> &neuronsBiases);     //Layer constructor

    Layer layer = Layer(weights, biases);

    vector<vector<double>> inputs = {inputs0, inputs1, inputs2};

    vector<double> outputs = layer.getOutputs(inputs);

    cout << "Layer generated these outputs: " << endl;
    for (size_t i = 0; i < outputs.size(); i++){
        cout << outputs[i] << endl;
    }

    cout << "Enter to exit...";
    cin.get();

    return 0;
}