#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fp = fopen("./numbers.txt", "r");
	if(fp == NULL)
	{
		perror("Failed to open file\n");
		exit(EXIT_FAILURE);
	}
	
	int** num_grid = (int**)malloc(sizeof(int*));
	
	int row = 0, row_size = 1;
	char digit = fgetc(fp);
	while(digit != EOF){
	int y = strcmp(&digit, "\n");
	printf("%d ?= %d\n", digit, y);
		if(strcmp(&digit, "\n") == 0){	
		printf("row: %d", row);
//			row ++;
//			realloc(num_grid, row * sizeof(int*));
//			num_grid[row] = (int*)malloc(sizeof(int));
		}
		digit = fgetc(fp);
	}
	
	int x = sizeof(num_grid);
	x = row;
	printf("%d\n", x);
}


