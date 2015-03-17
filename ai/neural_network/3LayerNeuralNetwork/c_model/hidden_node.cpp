#include "hidden_node.h"

HiddenNode::HiddenNode(){}
HiddenNode::HiddenNode(int input){}
HiddenNode::HiddenNode(std::vector<int> input){}

void HiddenNode::setOutputRatio(double output_ratio){
	HiddenNode::_output_ratio = output_ratio;
}

double HiddenNode::getOutputRatio(){
	return HiddenNode::_output_ratio;
}


