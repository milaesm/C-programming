#include <stdio.h>

int main()

{
	//Declaring the values//
	
	double currentSalary;
	double newSalary;
	double const retroPercent = 0.076;  //Retro % is a constant value//
	double monthlySalary;
	double retroPay;
	int choice;   //User's choice//
	
	while (choice !=0){
	
	printf("Type your current Salary here: ");  //Asking for input//
	scanf("%lf", &currentSalary);
	
	
		
	//Arithmetic formulas for calculating New Annual Salary,Monthly Salary, and Retro payment//
			
	   (newSalary = (currentSalary * (1+ retroPercent)));
	   (monthlySalary = currentSalary * (1+ retroPercent) / 12);
	   (retroPay = (currentSalary * retroPercent) / 2);
	   
	   
	   
	   //Output//
	   printf("Your new Salary is: %lf\n ", newSalary);
       printf("Your Monthly Salary is: %lf\n", monthlySalary);
       printf("Your Retro Pay is: %lf\n ", retroPay);

      
	  
	  //Asking a user to continue or break//
	   printf("Do you want to calculate again? 1 - yes, 0 - no\n");
       scanf("%d", &choice);
		 
			
	}

		 
		 
	
		
	return 0;
		
		
	
	
}