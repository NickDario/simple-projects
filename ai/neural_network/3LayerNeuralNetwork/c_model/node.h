#include <vector>
#include <string>

#ifndef NODE_H
#define NODE_H

class Node{
	private:
		std::string _name;
		std::vector<int> _in;
		std::vector<int> _out;
		
	public:

		Node();
		Node(int);
		Node(std::vector<int>);
	
		void setName(std::string);
		std::string getName();

		void addInput(int);
		void setInput(std::vector<int>);
		std::vector<int>  getInput();
		void clearInput();
		
		void setOutput(std::vector<int>);
		std::vector<int> getOutput();
		
		//	set output based on input
		virtual void computeOutput();
		virtual void displayOutput();
		virtual void displayNode();
};

#endif



