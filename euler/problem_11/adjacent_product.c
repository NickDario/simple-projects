#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_COLUMNS 20
#define NUM_ROWS	20

int main()
{
	FILE* fp = fopen("numbers.txt" ,"r");
	int numbers[20][20];
	
	
	int i = 0;	//	rows
	int j = 0;	//	columns
	int new = 0; // number
	char digit = fgetc(fp);
	char number[3];
	while(digit == 32 || digit == 10){
		digit = fgetc(fp);
	}
	while(digit != EOF){
		if(i == NUM_ROWS) break;
		if(digit == 10){
			numbers[i][j] = strtod(number, NULL);
			printf("%d\n", numbers[i][j]);
			i ++;
			j = 0;
			new = 0;
		} else if(digit == 32){
			//number[2]
			numbers[i][j] = strtod(number, NULL);
			j++;
			new = 0;
		} else {
			number[new] = digit;
			new ++;
		}
		
		digit = fgetc(fp);
	}


	int l = 0;
	int m = 0;
	for(l=0; l < NUM_ROWS; l++){
		for(m=0; m < NUM_COLUMNS; m++){
			printf("number[%d][%d] = %d\n", l, m, numbers[l][m]);
		}
	}
	
}



