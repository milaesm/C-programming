#include <stdio.h>



int main()

{

	int integer1, integer2; 
	int sum, product, average, remainder;
	
	/*double ave;*/
	
	printf("Enter the first number: ");
	scanf("%d", &integer1);
	printf("Enter the second number: ");
	scanf("%d", &integer2);
	
	sum= integer1 + integer2;
	
	printf("%d + %d = %d \n", integer1, integer2, sum);
	
	
	product= integer1 * integer2;
	
	printf("%d * %d = %d \n", integer1, integer2, product);
	
	
	
	average= (integer1 + integer2)/ 2;
	/* ave= (integer1 + integer2)/ 2.0;
	printf("Ave=%.2f\n ", ave);*/
	
	
	printf("(%d + %d) / 2 = %d \n", integer1, integer2, average);
	
	
	
	
	remainder= integer1 % integer2;
	
	printf("%d %% %d = %d \n", integer1, integer2, remainder);
	
	
	system("pause");
	
	return 0;
	
	
}


    
	
	


