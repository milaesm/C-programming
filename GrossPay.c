#include <stdio.h>

int main()

{
	// Declaring variables//
	int dependent;
	int overtimeHours;
	int unionDues;
	int hourRate;
	int healthInsurance;
	int choice;

	float salary;
	float socialSecurityTax;
	float stateIncomeTax;
	float netTakeHomePay;
	
	do {
		
	printf("Please enter how many hours you worked: "); //Asking user for input//
	scanf("%d", &hourRate);
	
	printf("Please enter the number of dependents: "); //input//
	scanf("%d", &dependent);
	
	
	if(dependent >= 3)   //Actual functions//
		
		healthInsurance = 35;
		
	else
		
		healthInsurance = 0;
	
	
	overtimeHours = hourRate - 40;
	salary = ((hourRate * 16.78) + (1.5 * 16.78 * overtimeHours));
	socialSecurityTax = 0.06 * salary;
	stateIncomeTax = 0.14 * salary;
	unionDues = 10;
	netTakeHomePay = salary -(stateIncomeTax + socialSecurityTax + unionDues);
	
	
	
	//Output//
	
	printf("\n Hours worked:%d", hourRate);
	printf("\n Number of dependents:%d", dependent);
	printf("\n Your Salary:%.2f", salary);
	printf("\n Social Security Tax:%.2f", socialSecurityTax);
	printf("\n State Income Tax:%.2f", stateIncomeTax);
	printf("\n Union Dues:%d", unionDues);
	printf("\n Health Insurance:%d", healthInsurance);
	printf("\n Net take-home Salary:%.2f", netTakeHomePay);
	printf("\n Do you want to calculate again? 1 - yes, 0 - no");
    scanf("%d", &choice);  //Asking a user to continue or break//
	
	} while(choice!=0);
	
	
	return 0;
	
	
}