
#ifndef HIDDEN_H
#define HIDDEN_H

class HiddenNode: public Node{
	private:
		string _name;
		vector<int>	_inputs
		
	public:	
		int transformValue();
		void setName(string);
		string getName();
		
}



#endif 

