#include<stdio.h>
int main()
{
	
	int n,r,rev;
	rev=0;
	
	printf("Enter number: \n");
	scanf("%d",&n);
	
	while(n!=0)
	{
		r=n%10;
     	rev=rev*10+r;
      	n=n/10;						
	}
	
		printf("Reverse of entered number is: %d",rev);	
}
