/*
Implementation of a simple neuron to understand the NN from the ground up
*/

#include <iostream>
#include <vector>

using namespace std;

//Neuron class
class Neuron {

    //the construct of the neuron receives the input array, the weights array and the bias and the number of inputs
    private:
        vector<double> inputs;
        vector<double> weights;
        double bias;

    public:
        Neuron(const vector<double> &inputs, const vector<double> &weights, double bias)
            : inputs(inputs), weights(weights), bias(bias) {}

        //function to calculate the output of the Neuron
        double GetOutput(){
            double acc = 0; //accumulator to calculate the output
            //iterate over the inputs and weights to calculate the output
            //at every iteration i, calculate inputs[i] * weights[i] and add it to the accumulator

            for (int i = 0; i < this->inputs.size(); i++){
                acc += this->inputs[i] * this->weights[i];
            }

            //then add the bias to the accumulator
            return acc + this->bias;
        }
};


//Main function to test the neuron
int main(void) {

    cout << "Simple Neuron" << std::endl;

    //create inputs weight bias
    vector<double> inputs = {1, 2, 3};
    vector<double> weights = {0.2, 0.8, -0.5};
    double bias = 2.0;

    //Create the neuron
    Neuron neuron = Neuron(inputs, weights, bias);

    //Retrieve the output of the neuron
    double output = neuron.GetOutput();

    cout << "Neuron generated this output: " << output << endl;   


    cout << "Enter to exit...";
    cin.get();

    return 0;
}