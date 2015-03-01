#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
	int length;
	printf("search 'number.txt' for the largest sum of adjacent digits.\n");
	printf("how long should the string of adjacent digits be?\n");
	scanf("%d", &length);
	
	int string_bytes = length * sizeof(char);
	
	FILE *fp;
	fp = fopen("number.txt", "r");
	if(fp == NULL)
	{	
		perror("failed to open file\n");
		exit(EXIT_FAILURE);
	}
	
	char c;
	unsigned long  m = 0, product, max_product = 0, done = 0, distance = 0;
	int extras = 0;
	
	while(done != 1)
	{
		extras = 0;
		product = 1;
		printf("starting at %lu .. ", ftell(fp));
		for(int j=0; j < length; j++)
		{
			c = fgetc(fp);
			if(c == EOF) {
				done = 1;
				break;
			
			} else if( c == '\n') {
			//	Check for newline character and ignore it. remember to 
			//	include it when seeking back by incrementing extra.
				extras ++;
				j--;
				continue;
			}
			//	Convert to integer and multiply it in to product; 
			m = atoi(&c);
			if ( j==0 ) printf("%lu", product);
			printf("* %lu", m);
			product = m * product;
		}
		//	if string's product is larger than previous largest add it.
		//	send file pointer back the length of string minus one to
		//	move it forward.
		printf(" = %lu\n", product);
		max_product = product > max_product ? product : max_product;
		fseek(fp, -(length - 1) - extras, SEEK_CUR);
	}
		
	printf("%lu\n", max_product);
	fclose(fp);
}


