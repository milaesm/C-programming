#include <stdio.h>

/*  %d,%i, %lf, %f, %c,%e,%s,%p,%10.3f*/


int main()
{
	
	int quarters;
	int dimes;
	int nickels;
	int cents;
	
	printf("Please enter the number of quarters: ");
	scanf("%d", &quarters);
	
	printf("Please enter the number of dimes: ");
	scanf("%d", &dimes);
	
	printf("Please enter the number of nickels: ");
	scanf("%d", &nickels);
	
	cents= (quarters * 25) + (dimes * 10) + (nickels * 5);
	
	printf("Your result:\n %d cents\n", cents);
	
	
	return 0;
	
}