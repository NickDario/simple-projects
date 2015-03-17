#include "node.h"
#include <vector>


#ifndef INPUT_H
#define INPUT_H


class InputNode: public Node{
	private:
	
	public:
		InputNode();
		InputNode(int);
	
		void setInput(int);
		int getInput();
		
		void setOutput(int);
		int getOutput();
		
		virtual void computeOutput();
};

#endif 



