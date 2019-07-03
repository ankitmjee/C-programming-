#include<stdio.h>
int main()
{
	char name[100];
	int age;
	double p_no;
	
	printf("Enter name:\n");
	scanf("%s",&name);
	printf("Enter age:\n");
	scanf("%d",&age);
	printf("Enter phone number:\n");
	scanf("%d",&p_no);
	
	printf("Details:\n");
	printf("Name \tAge \tPhone number\n");
	printf("%s\t%d\t%d",name,age,p_no);
		
}
