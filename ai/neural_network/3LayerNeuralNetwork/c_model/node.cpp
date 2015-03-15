#include "node.h"
#include <vector>


using namespace std;

Node::Node(){
	Node::_in = 0;
	Node::_out = 0;
}

Node::Node(int value_in){
	Node::_in = value_in;
	Node::_out = value_in;
}

void Node::setValue(int value_in){
	Node::_in = value_in;
}

int Node::getValue(){
	return Node::_out;
}

int Node::transformValue(){
	Node::_out = Node::_in;
	return Node::_out;
}


