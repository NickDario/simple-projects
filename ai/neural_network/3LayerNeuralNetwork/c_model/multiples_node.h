#include "hidden_node.h"


class MultiplesNode: public HiddenNode{
	private:
		int multiple;
	
	public:
		MultiplesNode();
		MultiplesNode(std::vector<int>);
		
		void setMultiple(int);
		int getMultiple();

		void computeOutput();	
};



