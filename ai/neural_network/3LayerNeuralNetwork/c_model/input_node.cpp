#include "input_node.h"

using namespace std;


/**	Constructors **/

InputNode::InputNode(){
	setName("InputNode");
}

InputNode::InputNode(int input){
	setInput(input);
}

/**	Methods **/

void InputNode::setInput(int input){
	Node::clearInput();
	Node::addInput(input);
	Node::setOutput(Node::getInput());
}

int InputNode::getInput(){
	vector<int> input = Node::getInput();
	return input.front();
}

void InputNode::setOutput(int output){
	vector<int> output_vector;
	output_vector.push_back(output);
	Node::setOutput(output_vector);
}

int InputNode::getOutput(){
	vector<int> output_vector = Node::getOutput();
	return output_vector.front();
}

void InputNode::computeOutput(){
	int output = InputNode::getInput();
	InputNode::setOutput(output);
}



