#include<stdio.h>
#include<math.h>
int main()
{
	
	int n,num,arm,r,a,i;
	i=a=0;
	
	
	printf("Enter a number: \n");
	scanf("%d",&n);
	
	num=a=n;
	
	while(n!=0)
	{
		i++;
		n=n/10;
	}
	
	
    while(a!=0)
    {
        r=a%10;
        arm=arm+(pow(r,i));
        a=a/10;
    }
    if(arm==num)
        printf("%d is an Armstrong number\n",num);
    else
        printf("%d is not an Armstrong number",num);
    
		
}

