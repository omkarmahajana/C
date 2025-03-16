#include<stdio.h>
void main()
{
	char str[80];
	int i;
	printf("\n enter the string");
	fgets(str);
	for(i=0;str[i]!='\0';i++)
		printf("\n%c",str[i]);
}
