#include<stdio.h>
#include<string.h>
void main()
{
	char str1[80],str2[80];
	printf("enter 1st string");
	fgets(str1,80,stdin);
	printf("enter 2nd string");
	fgets(str2,80,stdin);
	if(strcmp(str1,str2)==0)
		printf("\n you are identical");
	else
		printf("\n miss match found");
}
