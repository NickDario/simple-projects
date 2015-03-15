
#ifndef NODE_H
#define NODE_H

class Node{
	private:
		vector<int> _in;
		int _out;
		
	public:

		Node();
		Node(int);

		void setValue(int);
		int getValue();
		
		int transformValue();
};

#endif



