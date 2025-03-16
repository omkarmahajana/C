#include<stdio.h>
#include<string.h>
void main()
{
	char names[80][80],str[80];
	int n,i,j;
	printf("\n how many names");
	scanf("%d",&n);
	getchar();
	printf("\n enter names");
	for(i=0;i<n;i++)
	{
		fgets(names[i],80,stdin);
	}
	printf("\n unsorted list");
	for(i=0;i<n;i++)
	printf("%s",names[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
			if(strcmp(names[i],names[j])>0)
	{
		strcpy(str,names[i]);
		strcpy(names[i],names[j]);
		strcpy(names[j],str);
	}
	}
}
