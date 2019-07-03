#include<stdio.h>
int main()
{
	
	int n,i,f;
	f=1;
	
	printf("Enter a number: \n");
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++)
	{
			
		f=f*i;	
			
	}
		
	
	printf("The factorial is: %d",f);
	
}
