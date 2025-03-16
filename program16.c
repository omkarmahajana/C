#include<stdio.h>
#include<string.h>

void main()
{
	char names[20][80];
	int i,n;

	printf("How many names?: ");
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
		int len = strlen(names[i]);

		if((names[i][0] == 'r' || names[i][0] == 'R' || names[i][0] == 's' || names[i][0] == 'S')&& strcmp(&names[		  i][len-3],"esh")==0)
		{
			printf("%s\n",names[i]);
		}
	}
}

