#include<stdio.h>
#include<string.h>

void main()
{
	char names[20][80],temp[80];
	int i,n,j;

	printf("How many Names?\n ");
	scanf("%d",&n);
	getchar();

	for(i=0;i<n;i++)
	{
		printf("Enter name %d - ",i+1);
		fgets(names[i],80,stdin);
		names[i][strcspn(names[i],"\n")] = '\0';
	}
	
	for(i=0;i<n;i++)
	{
		for( j = i+1;j<n;j++)
		{
			if(strlen(names[i])<strlen(names[j]))
			{
				strcpy(temp,names[i]);
				strcpy(names[i],names[j]);
				strcpy(names[j],temp);
			}
		}
	}

	printf("\n Names sorted by length in Descending Order: \n");
	for(int i = 0 ;i<n ;i++)
	{
		printf("%s\n",names[i]);
	}
}

