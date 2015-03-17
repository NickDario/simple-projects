#include "neural_network.h"
#include <iostream>

using namespace std;

/** Constructors **/
NeuralNetwork::NeuralNetwork() {
	_input_count = 0;
	_output_count = 0;
}

NeuralNetwork::NeuralNetwork(vector<int> inputs) {
	vector<int>::iterator it;
	_input_count = 0;
	_output_count = 0;
	for(it = inputs.begin(); it < inputs.end(); it ++) {
		InputNode* node = new InputNode(*it);
		_input_nodes.push_back(node);
		_input_count ++;
	}
}

/** Methods **/
void NeuralNetwork::addInput(int input) {
	InputNode* node = new InputNode(input);
	_input_nodes.push_back(node);
	_input_count ++;
}

void NeuralNetwork::setInput(vector<int> inputs) {
	vector<int>::iterator it;
	_input_count = 0;
	for(it = inputs.begin(); it < inputs.end(); it ++) {
		InputNode* node = new InputNode(*it);
		_input_nodes.push_back(node);
		_input_count ++;
	}
}

void NeuralNetwork::addHiddenNode(HiddenNode* node) {
	_hidden_nodes.push_back(node);
	_hidden_count ++;
	cout << "Added Hidden Node \" " << _hidden_nodes.back()->getName() << "\"" << endl;
}

void NeuralNetwork::setHiddenNodes(vector<HiddenNode *> nodes) { 
	_hidden_nodes = nodes;
	_hidden_count = nodes.size();
}

void NeuralNetwork::calculateOutputs() {
	//	Apply inputs to all hidden nodes;
	vector<HiddenNode *>::iterator hidden_it = _hidden_nodes.begin();
	for(hidden_it; hidden_it < _hidden_nodes.end(); hidden_it ++){
		vector<InputNode *>::iterator input_it = _input_nodes.begin();
		for(input_it; input_it < _input_nodes.end(); input_it ++){
			(*hidden_it)->addInput((*input_it)->getOutput());
		}
		(*hidden_it)->computeOutput();
	}
}

std::vector<double> NeuralNetwork::getOutputs() {
	
}

void NeuralNetwork::showInput(){
	vector<InputNode *>::iterator input_it = _input_nodes.begin();
	cout << "Inputs: ";
	for(input_it; input_it < _input_nodes.end(); input_it ++) {
		cout << (*input_it)->getOutput() << ", ";
	}
	cout << endl;
}

void NeuralNetwork::showOutput() {
	vector<HiddenNode *>::iterator hidden_it = _hidden_nodes.begin();
	cout << "Outputs: " << endl;
	for(hidden_it; hidden_it < _hidden_nodes.end(); hidden_it ++) {	
		cout << (*hidden_it)->getName() << ": " << (*hidden_it)->getOutputRatio() << endl;
	}
}


