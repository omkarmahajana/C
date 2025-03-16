#include<stdio.h>
void main()
{
	char str[80],ch;
	int i,vct=0;
	printf("\n enter a string:");
	fgets(str,80,stdin);
	for(i=0;str[i]!='\0';i++)
	{
		ch=str[i];
		if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
			vct++;
	}
	printf("\n vowel count=%d",vct);
}

