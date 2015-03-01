#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//	Pythagorean triplet: a < b < c where a^2 + b^2 = c^2
//	Find one where a + b + c = 1000
int main()
{

	// a, b, & c > 300
	int a;
	int b;
	double c;

	int bot = floor(sqrt(1000)); // bot^2 == 1000

	int asq, bsq, csq, m;
	
	for(a = 1; a < 1000; a++) {
		for(b = 1; b < (1000 - a); b++) {
			asq = pow(a, 2);
			printf("%d +", asq);
			bsq = pow(b, 2);
			printf(" %d = ", bsq);
			csq = asq + bsq;
			printf("%d\n", csq);
			c = sqrt(csq);
			if(floor(c) == c){
				
				if( a + b + c == 1000){
					printf("%d + %d + %f = 1000!\n", a, b, c);
					m = a * b * c;
					printf("%d*%d*%f = %d\n", a, b, c, m);
					return 0;
				}
			}
		}
	}
}


