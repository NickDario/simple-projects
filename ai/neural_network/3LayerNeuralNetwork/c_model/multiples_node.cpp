#include "multiples_node.h"
#include <iostream>

using namespace std;

MultiplesNode::MultiplesNode(){
	MultiplesNode::multiple = 1;
}

MultiplesNode::MultiplesNode(vector<int> input){
	Node::setInput(input);
}

void MultiplesNode::setMultiple(int multiple){
	MultiplesNode::multiple = multiple;
}

int MultiplesNode::getMultiple(){
	return MultiplesNode::multiple;
}

void MultiplesNode::computeOutput(){
	
	vector<int> input = Node::getInput();
	vector<int> output;

	int mul = MultiplesNode::multiple;
	
	vector<int>::iterator ipit = input.begin();
	int input_size = input.size();
	int output_size = 0;
	
	//cout << "input size : " << input_size << endl;
	for(ipit; ipit < input.end(); ipit ++){
		if(*ipit % mul == 0){
			output_size ++;
			output.push_back(*ipit);
		}	
//		cout << output_size << ": " << *ipit << endl;
	}
	setOutput(output);
	double output_ratio = (double)output_size / (double)input_size;
	setOutputRatio(output_ratio);
}

