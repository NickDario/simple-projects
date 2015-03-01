#include <iostream>

using namespace std;

/*
	SOLVED
	
	errors: 
	Using 1001, and adding 1000. Read more carefully.
	forgetting to check modulo against 0
*/

int main()
{
	cout << "If we list all the natural numbers below 10 that are multiples of 3 or 5, " << endl;
	cout << "we get 3, 5, 6 and 9. The sum of these multiples is 23. Find the sum of " << endl;
	cout << "all the multiples of 3 or 5 below 1000." << endl;
	
	int i = 0;
	int sum = 0;

	for(i = 0; i < 1000; i++)
	{	
		if(i%3 == 0 || i%5 == 0) {
			sum += i;
			cout << i << endl;
		} 
	}
	cout<<endl;
	cout<<endl;
	
	cout << sum << endl;


	return 0;
}


