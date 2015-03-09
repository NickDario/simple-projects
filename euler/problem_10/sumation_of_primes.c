#include <stdio.h>
#include "utils.h"


int main()
{
	int x = 0;
	
	printf("find the summation of all the primes from zero to: ");
	scanf("%d", &x);
		
	int i = 0;
	long long  sum = 0;
	for(i = 0; i < x; i ++) {
		if(check_prime(i) > 0){
			printf("%d is prime \n", i);
			sum += i;
		}
	}
	
	printf("%llu\n", sum);
	
	return 0;
}

