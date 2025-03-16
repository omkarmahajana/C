#include<stdio.h>
void main()
{
	char str[80];
	int i;
	printf("enter the string:");
	fgets(str,80,stdin);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
			printf("\n");
		else
			printf("%c",str[i]);
	}
}	
