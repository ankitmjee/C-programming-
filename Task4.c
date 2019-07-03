#include<stdio.h>
#include<string.h>
int main()
{
	
	char f_name[50];
	char l_name[50];
	char full_name[100];
	
	printf("Enter first name: \n");
	scanf("%s",&f_name);
	printf("Enter last name: \n");
	scanf("%s",&l_name);
	
	strcat(strcat(f_name," "),l_name);
	
	printf("Full name: %s\n",f_name);
	
	
}
