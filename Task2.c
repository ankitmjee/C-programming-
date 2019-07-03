#include<stdio.h>
int main()
{
	
	float temp_cel,temp_far;
	
	printf("Enter temperature in Celcius: \n");
	scanf("%f",&temp_cel);
	temp_far=((9*temp_cel)/5)+32;
	
	printf("The temperature in Farenheit is: %f",temp_far);
		
}
