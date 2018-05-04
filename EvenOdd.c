#include <stdio.h>

int main()
{
	int number;  
	printf("Please enter an integer: "); //Asking user for the input as a number//
	scanf("%d", &number);
	
	{if(number % 2 ==0)    //Checking if the number is Even or Odd by dividing the remainder by 2//
		printf("%d is even\n", number); //If remainder is 0, then the integer is Even//
	}
	else {
		printf("%d is odd\n", number);  //If remainder is not 0, then its Odd//
	}
	
	return 0;
	
	
	
	
}