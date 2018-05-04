#include <stdio.h>
/*  %d,%i, %lf, %f, %c,%e,%s,%p,%10.3f*/


int main()

{
	int time;
	long int distance;
	int const acceleration = 32;
	
	printf("Enter the time in seconds: \n");
	scanf("%d", &time);
	
	
	distance= (acceleration / 2) * (time * time);
	
	printf("An object in freefall would drop \n ");
	printf("%ld\n", distance);
	
	system("pause");
	
	return 0;
	
	

}
