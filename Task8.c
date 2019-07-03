#include<stdio.h>
int main()
{
	
	int n,i;
	int r=0;
	
	printf("Enter an integer: \n");
	scanf("%d",&n);
	
	printf("The multiplication table of entered number is: \n");
	
	for(i=1;i<=10;i++)
	{
		
		r=n*i;
		printf("%d*%d=%d\t\n",n,i,r);
	
	}

}
