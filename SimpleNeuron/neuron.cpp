/*
Implementation of a simple neuron to understand the NN from the ground up
*/

#include <iostream>

using namespace std;

//Neuron class
class Neuron {

    //the construct of the neuron receives the input array, the weights array and the bias and the number of inputs
    private:
        double inputs[];
        double weights[];
        double bias;
        double output;
        int numInputs;

    public:
        Neuron(double inputs[], double weights[], double bias, int numImputs){
            this.inputs = inputs;
            this.weights = weights;
            this.bias = bias;
            //set the output of the neuron

        }

        //function to calculate the output of the Neuron
        double GetOutput(){
            double acc = 0; //accumulator to calculate the output
            //iterate over the inputs and weights to calculate the output
            //at every iteration i, calculate inputs[i] * weights[i] and add it to the accumulator

            for (int i = 0; i < this->numInputs; i++){
                acc += this->inputs[i] * this->weights[i];
            }

            //then add the bias to the accumulator
            return acc + this->bias;
        }
}


//Main function to test the neuron
int main(void) {

    std::cout << "Simple Neuron" << std::endl;

    //create inputs weight bias
    double inputs[] = {1, 2, 3};
    double weights[] = {0.2, 0.8, -0.5};
    double bias = 2.0;

    //Create the neuron
    Neuron neuron = new Neuron(inputs, weights, bias, 3);

    //Retrieve the output of the neuron
    double output = neuron.GetOutput();

    std::cout << "Neuron generated this output: " << output << std::endl;   

    return 0;
}