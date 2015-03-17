#include "node.h"

#ifndef HIDDEN_H
#define HIDDEN_H

class HiddenNode: public Node{
	private:
		double _output_ratio;
		
	public:	
		HiddenNode();
		HiddenNode(int);
		HiddenNode(std::vector<int>);

		void setOutputRatio(double);
		double getOutputRatio();
			
		//virtual void computeOutput();
		//virtual void displayOutput();
		//virtual void displayNode();
};



#endif 

