#include <stdio.h>

int main()
{
	
	double savings;         //Savings and Expenses are variables of type double//
	double expenses;
	
	printf("Please enter amount in savings: ");  //Asking user for the input//
	scanf("%d", &savings);
	
	printf("Please enter amount in expenses: ");
	scanf("%d", &expenses);
	
	if(savings >= expenses)     //If Savings as large as the expenses, then output the word "Solvent"//
	{
	    printf("Solvent");     //Output//
		savings= savings - expenses;    //Decreases the value of Savings by the value of Expenses//
		expenses = 0;    //Set the value to 0//
		
		
	
	} else      //If Savings is less than expenses//
	
	{
		
		 
		 printf("Bankrupt");  //Output the word "Bankrupt" and doesnt change the value//
		 
		 
	}
	
	 
	 return 0;
	 
	 
	
	
	
	
	
}