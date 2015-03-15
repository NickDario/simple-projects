#include "node.h"
#include <string>

using namespace std;

int main()
{
	Node* n = new Node(8);
	n->transformValue();
	int x = n->getValue();
	printf("%d\n", x);

}


