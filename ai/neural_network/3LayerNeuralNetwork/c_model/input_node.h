#include "node.h"
#include <vector>


#ifndef INPUT_H
#define INPUt_H


class InputNode: public Node{
	private:
	std::vector<Node> _hiddenNodes;
	
	public:
	void setHiddenNodes(std::vector<Node>);
	vector<Node> getHiddenNodes();
	
	
}

#endif 



