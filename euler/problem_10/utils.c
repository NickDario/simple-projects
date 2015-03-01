#include "utils.h"
#include <math.h>

int check_prime(int number)
{
	//	Check 2 and 3
	if(number == 2 || number == 3) return 1;
	if(number == 1 || number % 2 == 0 || number % 3 == 0) return 0;
	
	int upper_limit = (int)floor(sqrt(number));
	
	int	i = 0;

	for(i = 5; i <= upper_limit; i+=6) 
	{
		if(number % (i + 2) == 0) return 0;
		if(number % i == 0) return 0;
	}

	return 1;
}

