#include<stdio.h>
void main()
{
    int i,j,n,x;
    printf("enter how many liner");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=i%2;
        for(j=1;j<=i;j++)
        {
            printf("%4d",x);
            x=1-x;
        }
        printf("\n");
    }
}
/*
   1
   0   1
   1   0   1
   0   1   0   1
   1   0   1   0   1
   0   1   0   1   0   1
   1   0   1   0   1   0   1
   0   1   0   1   0   1   0   1
   1   0   1   0   1   0   1   0   1
   0   1   0   1   0   1   0   1   0   1
*/