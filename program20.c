#include<stdio.h>
#include<string.h>

void main()
{
	char str[80];
	int swwlength(char *);

	printf("\n Enter a string: ");
	fgets(str,80,stdin);
	str[strcspn(str,"\n")] = '\0';

	printf("\n stringlength = %d" , swwlength(str));
}

int swwlength(char s[])
{
	int i, len = 0;

	for(i = 0 ;s[i]!='\0';i++)
	{
		if((s[i]!= ' ') && (s[i]!='\t')&&(s[i]!= '\n'))
		{
			len++;
		}
	}
	return len;
}
