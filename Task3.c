#include<stdio.h>

int main()
{
	
	float s1,s2,s3,sum,avg;
	sum=avg=0;
	
	printf("Enter marks in subject 1: \n");
	scanf("%f",&s1);
	printf("Enter marks in subject 2: \n");
	scanf("%f",&s2);
	printf("Enter marks in subject 3: \n");
	scanf("%f",&s3);
	
	sum=s1+s2+s3;
	avg=sum/3;
	
	printf("Sum= %f\n",sum);
	printf("Average= %f",avg);

		
}
