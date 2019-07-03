#include<stdio.h>
struct book
{
	char title[50];
	char author[50];
	char genre[50];
	
};

void display(struct book b1);

int main()
{
	
	struct book b;
	
	printf("Enter details \n");
	printf("Enter title: \n");
	scanf("%s",&b.title);
	printf("Enter author's name: \n");
	scanf("%s",&b.author);
	printf("Enter genre: \n");
	scanf("%s",&b.genre);

	display(b);
	return 0;
	
}

void display(struct book b1)
{
	
	printf("Displaying details: \n");
	printf("Title: %s\n",b1.title);
	printf("Author's name: %s\n",b1.author);
	printf("Genre: %s\n",b1.genre);
}
	
