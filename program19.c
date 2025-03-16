#include<stdio.h>
#include<string.h>

void main()
{
	char str[80];

	int slength(char *);

	printf("\n Enter a string: " );
	fgets(str,80,stdin);
	str[strcspn(str,"\n")]= '\0';

	printf("\n String length = %d " ,slength(str));
}

int slength(char s[])
{
	int i;
	for(i=0;s[i]!='\0';i++);
		return i;
}

