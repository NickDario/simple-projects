#include <stdlib.h>
#include <stdio.h>


// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

int* getBlockNum(int);

int main()
{
	int* number;
	
	printf("2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.\n");
	printf("please provide a number and the smallest multiple that can be created using a sequence from one to the number will be calculated.\n");
	printf("number: ");
	
	scanf("%d", number);
		
	int i = 0;
	unsigned long multiple = 0;
	
	int div = 0;
	while(div == 0){
		i++;
		int c = 1; 
		div = 1;
		for(c; c < *number; c++) {
			if(i % c != 0){
				div = 0;
				break;
			}
		}
		if(div == 1){
			multiple = i;
		}
	}
	
	printf("%lu\n", multiple);	
	
	return 0;
//	int* block_numbers = getBlockNum(*number);
}




int* getBlockNum(int number)
{
	//int i, j;
	//int* t = malloc(sizeof(int));
	//return t;
/*	int* block_num = malloc(number * sizeof(int));
	
	for(i = 0; i < number; i++) {
		block_num[i] = 1;
		for(j = 0; j < number; j++){
			if(j % i == 0){
				block_num[i] = 0;
				break;
			}
		}
	}
	return block_num;
}
*/
}

