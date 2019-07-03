#include<stdio.h>
int main()
{
	
	int large,small,i,n;
	int a[100];
	
	printf("Enter no. of elements in array: \n");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++)
	{
		
		printf("Enter elements in array: \n");
		scanf("%d",&a[i]);
		
	}
	
	large=small=a[0];
	
	for(i=0;i<n;i++)
	{
		if(a[i]>large)
		large=a[i];
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]<small)
		small=a[i];
	}
	
	printf("Largest element in the array is: %d\n",large);
	printf("Smallest element in the array is: %d\n",small);
	
	
}
	
