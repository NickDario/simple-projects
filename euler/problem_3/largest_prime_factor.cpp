#include <iostream>
#include <math.h>
#include <cstdint>


/**********************************************************************

	The prime factors of 13195 are 5, 7, 13 and 29.
	What is the largest prime factor of the number 600851475143 ?

***********************************************************************/

using namespace std;

const double N = 600851475143;

uint64_t iterative(uint64_t number);
double   fermat(double number);

int main()
{	
//	double test = N/486847;
//	printf("%f", test);
//	return 0;

	double lpf1 = iterative(N);
	double lpf2 = fermat(N);
	cout << "Largest Prime Factor:" << lpf1 << endl;
	cout << "Largest Prime Factor:" << lpf2 << endl;

	return 0;
}


uint64_t iterative(uint64_t number)
{
	uint64_t x = sqrt(number);
	uint64_t i=0, j=0, lpf=0;
	bool prime;
	
	for(i = 1; i < x; i++) {
		if(number % i  == 0){
			cout << "[Factor] " << i << endl;
			prime = true;
			for(j = 2; j < i; j++) {
				if(i % j == 0){
					prime = false;
				}
			}
			if(prime) {
				cout << "[Prime Factor] " << i << endl;
 	 			lpf = i;
			}	
		}
	}
	return lpf;
}


double fermat(double number)
{
	double prime, a, b, b_sqr;
	
	a = ceil( sqrt(number) );
	b_sqr = (a * a) - number;	
	b = sqrt(b_sqr);
	
	while(floor(b) != b){
		printf("a:%f, b:%f \n", a, b);
		a++;
		b_sqr = (a * a) - number;
		b = sqrt(b_sqr);
	}
	
	printf("a:%f, b:%f \n", a, b);

	prime = a - b;
	
	return prime;
}











