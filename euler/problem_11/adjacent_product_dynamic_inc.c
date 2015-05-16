#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define DEFAULT_LINE_LENGTH 20
#define MAX_NUMBER_SIZE 2

int main()
{
	FILE *fp = fopen("./numbers.txt", "r");
	if(fp == NULL)
	{
		perror("Failed to open file\n");
		exit(EXIT_FAILURE);
	}
	
	int row = 0, row_size = 0, max_rows = 0, max_row_size = 0;
	int** num_grid = (int**)malloc(sizeof(int*));	//	first row
	num_grid[0] = (int*)malloc(sizeof(int));
	int* number = (int*)malloc(sizeof(int));
	char digit = fgetc(fp);
	
	while(digit != EOF) {

		int num_len = 0;
		while(digit != ' ' && digit != '\n') {
			//	Building number...
	printf("reallocing number to %d\n", num_len + 1);
			realloc(number, sizeof(int) * (num_len+1));
			number[num_len] = atoi(&digit);
	printf("assigning number[%d] as %d\n", num_len, number[num_len]);
			digit = fgetc(fp);
			num_len ++;
		}
	
		if(num_len > 0){
			//	New Number
			int i, iDigit;
			for(i = 0; i < num_len; i ++) {
				printf("number[%d] = %d\n",i ,number[i] * (int)pow(10, i));
				iDigit += number[i] * (int)pow(10,i);
			}
	printf("%d\n", iDigit);
	printf("reallocing num_grid[%d] to %d\n", row, row_size+1);
			realloc(num_grid[row], sizeof(int) * (row_size + 1));
			num_grid[row][row_size] = iDigit;
	printf("assigning num_grid[%d][%d] as %d\n", row, row_size, iDigit);
			row_size ++;
		}

		//	Progress	
		realloc(number, sizeof(int));

		if( digit ==  '\n'){
			//	New Line
			if(	row_size == 0){	//	skip over empty lines and
				printf("empty row\n");
				digit = fgetc(fp);
				continue;
			}
			//	Progress
			row ++;
	printf("reallocing num_grid to %d\n", row+1);
			realloc(num_grid, sizeof(int*) * (row+1));
			num_grid[row] = NULL;
			max_row_size = row_size > max_row_size 
				? row_size 
				: max_row_size; 
			
			row_size = 0;
		}
		digit = fgetc(fp);	
	}

	
	
	int x = sizeof(num_grid);
	printf("%d\n", x);	
		
	int a, b;
	for(a = 0; a < row; a++) {
		for(b = 0; b < max_row_size; b++){
			free(num_grid[a][b]);
		}
	}
}






