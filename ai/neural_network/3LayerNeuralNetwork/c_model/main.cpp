#include "node.h"
#include "input_node.h"
#include "multiples_node.h"
#include "neural_network.h"
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	Node* n = new Node(8);
	n->setName("a basic node");
	std::vector<int> v = n->getOutput();
		
	cout << n->getName() << " output : " << v.front() << endl;
	
	InputNode* in = new InputNode();
	in->setInput(20);
	in->computeOutput();
	in->displayOutput();
	in->displayNode();




	MultiplesNode* mn = new MultiplesNode();

	mn->addInput(4);
	mn->addInput(41);
	mn->addInput(34);
	mn->addInput(2);
	mn->addInput(7);
	mn->addInput(0);
	
	mn->setMultiple(2);
	mn->computeOutput();
	
	mn->displayNode();
	cout << mn->getOutputRatio() << endl;

	

	MultiplesNode* mn1 = new MultiplesNode();
	mn1->setMultiple(2);
	mn1->setName("multiples of 2");
	MultiplesNode* mn2 = new MultiplesNode();
	mn2->setMultiple(3);
	mn2->setName("multiples of 3");
	MultiplesNode* mn3 = new MultiplesNode();
	mn3->setMultiple(5);
	mn3->setName("multiples of 5");
	MultiplesNode* mn4 = new MultiplesNode();
	mn4->setMultiple(8);
	mn4->setName("multiples of 8");


	NeuralNetwork* nn = new NeuralNetwork();
	
	nn->addHiddenNode(mn1);
	nn->addHiddenNode(mn2);
	nn->addHiddenNode(mn3);
	nn->addHiddenNode(mn4);
	
	nn->addInput(4);
	nn->addInput(41);
	nn->addInput(34);
	nn->addInput(32);
	nn->addInput(2);
	nn->addInput(7);
	nn->addInput(1);
	nn->addInput(0);
	
	nn->calculateOutputs();
	nn->showInput();
	nn->showOutput();
	
}


