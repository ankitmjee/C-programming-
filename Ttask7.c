#include<stdio.h>
#include<string.h>
int main()
{
	
	char str1[100];
	char str2[100];
	
	printf("Enter the string: \n");
	scanf("%s",&str1);
	
	strcpy(str2,str1);
	strrev(str2);
	
	if(strcasecmp(str2,str1)==0)
		printf("Entered string is pallindrome \n");
	else
		printf("Entered string is not pallindrome");	
		
		
}
