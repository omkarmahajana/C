#include<stdio.h>
void main()
{
	char str[80];
	int i;
	printf("\n enter a string:");
	fgets(str,80,stdin);
	for(i=0;str[i]!='\0';i++);
	printf("\n string length=%d",i);
}

