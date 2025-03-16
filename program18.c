#include<stdio.h>

void main()
{
	char str[80];
	void printstring(char*);
	printf("\n Enter a string: " );
	fgets(str,80,stdin);

	printstring(str);
}

void printstring(char s[])
{
	int i;
	for(i = 0;s[i]!='\0';i++)
		printf("\n %c ", s[i]);
}
