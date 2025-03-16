#include<stdio.h>
void main()
{
	char str[80];
	int i;
	printf("\n enter a string:");
	fgets(str,80,stdin);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z')
			str[i]=str[i]+32;
		else if(str[i]>='a' && str[i]<='z')
			str[i]=str[i]-32;
	}
	printf("\n string=%s",str);
}

