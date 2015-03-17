#include "node.h"
#include <iostream>


using namespace std;


/**	Constructors **/

Node::Node(){}

Node::Node(int value_in){
	Node::_in.push_back(value_in);
	Node::_out = Node::_in;
}

Node::Node(vector<int> values){
	Node::_in = values;
	Node::_out = values;
}

/**	Accessors **/

string Node::getName(){
	return Node::_name;
}

void Node::setName(string name){
	Node::_name = name;
}

/**	Methods **/


//	Handle input values
void Node::addInput(int value_in){
	Node::_in.push_back(value_in);
}

void Node::setInput(std::vector<int> values){
	Node::_in.clear();
	Node::_in = values;
}

std::vector<int> Node::getInput(){
	return Node::_in;
}

void Node::clearInput(){
	Node::_in.clear();
}

//	Handle output values

void Node::setOutput(vector<int> output){
	Node::_out.clear();
	Node::_out = output;
}

vector<int> Node::getOutput(){
	return Node::_out;
}

//	Virtual methods
void Node::computeOutput(){
	Node::_out = Node::_in;
}

void Node::displayOutput(){
	
	cout << Node::_name << " output:" << endl; 
	vector<int>::iterator it;
	for(it= Node::_out.begin(); it < Node::_out.end(); it++){
		cout << "\t" << *it << endl;
	}
}

void Node::displayNode(){
	
	vector<int> input = Node::getInput();
	vector<int> output = Node::getOutput();
	
	vector<int>::iterator ip_it = input.begin();
	vector<int>::iterator op_it = output.begin();
	
	for(ip_it; ip_it < input.end(); ip_it ++){
		cout << *ip_it << ", ";
	}
	cout << " >> " << Node::getName() << endl;
	cout << Node::getName() << " >> ";
	for(op_it; op_it < output.end(); op_it ++){
		cout << *op_it << ", ";
	}
	cout << endl;
}




