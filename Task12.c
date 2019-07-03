#include<stdio.h>
int main()
{
	
	
	
	int ch;
	float temp_cel;
	float temp_far;
	
	printf("-Main menu-\n");
	printf("[1]...Celcius to Farenheit \n");
	printf("[2]...Farenheit to Celcius \n");
	printf("[3]...Exit \n");
	printf("Enter choice: \n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		
		case 1:
				printf("Enter temperature in Celcius: \n");
				scanf("%f",&temp_cel);
				temp_far=((temp_cel*9)/5)+32;
				printf("Temperature in Celcius is: %f\n",temp_cel);
				printf("Temperature in Farenheit is: %f\n",temp_far);
				break;
				
				
		case 2:
				printf("Enter temperature in Farenheit: \n");
				scanf("%f",&temp_far);
				temp_cel=((temp_far-32)/9)*5;
				printf("Temperature in Farenheit is: %f\n",temp_far);
				printf("Temperature in Celcius is: %f\n",temp_cel);
				break;	
		
		
		default:
				printf("Wrong choice!\nExit");
		
		
		
		
	}
	
}
