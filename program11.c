#include<stdio.h>
void main()
{
	char str1[80],str2[80];
	int i;
	printf("enter the string:");
	fgets(str1,80,stdin);
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	printf("1st string:%s",str1);
	printf("2nd string:%s",str2);
}	
