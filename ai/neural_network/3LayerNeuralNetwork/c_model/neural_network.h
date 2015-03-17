#include "node.h"
#include "hidden_node.h"
#include "input_node.h"

#ifndef NETWORK_H
#define NETWORK_H

class NeuralNetwork{
	private:
	std::vector<InputNode *> _input_nodes;
	std::vector<HiddenNode *> _hidden_nodes;
	std::vector<Node *> _output_nodes;
	
	int _input_count;
	int _hidden_count;
	int _output_count;

	public:
	NeuralNetwork();
	NeuralNetwork(std::vector<int> inputs);
	
	void addInput(int);
	void setInput(std::vector<int>);
	
	void addHiddenNode(HiddenNode*);
	void setHiddenNodes(std::vector<HiddenNode *>);
	
	void calculateOutputs();
	std::vector<double> getOutputs();
	void showInput();
	void showOutput();
};

#endif

