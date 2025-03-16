#include<stdio.h>
#include<string.h>
void main()
{
	char names[10][20];
	int i;
	printf("\n enter names");
	for(i=0;i<10;i++)
	{
		fgets(names[i],20,stdin);
		printf("\n length");
	}
	printf("\n length:");
	for(i=0;i<=10;i++)
	{
		printf("%s-%d",names[i],strlen(names[i]));
	}
}
