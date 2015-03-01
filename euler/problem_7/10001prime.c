#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int check_prime(int number);

int main()
{
	printf("which number prime to find?\n");
	
	int max_prime;
	scanf("%d", &max_prime);
	
	printf("\n");
	int count  = 0,
		number = 0;
	
	while(count < max_prime)
	{
		number ++;
		if(number == 1) continue;
		printf("%d...", number);
		if(check_prime(number) == 1){
			count ++;
			printf("prime\n");
		};
		printf("\n");
	}
	
	printf("the %d prime is %d\n", max_prime, number);
}


int check_prime(int number)
{
	//	Check 2 and 3
	if(number == 2 || number == 3) return 1;
	if(number % 2 == 0 || number % 3 == 0) return 0;
	
	int upper_limit = (int)floor(sqrt(number));
	
	int	i = 0;

	for(i = 5; i <= upper_limit; i+=6) 
	{
		if(number % (i + 2) == 0) return 0;
		if(number % i == 0) return 0;
	}

	return 1;
}





