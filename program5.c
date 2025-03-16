#include<stdio.h>
void main()
{
	char str[80];
	int i;
	printf("enter a string");
	fgets(str,80,stdin);
	for(i=0;str[i]!='\0';i++);
	for(i--;i>=0;i--)
	printf("%c",str[i]);
}

