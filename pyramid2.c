#include<stdio.h>
void main()
{
    int i,j,n=21;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",n++ );
        }
        printf("\n");
    }
}
/*
21 
22 23
24 25 26
27 28 29 30
31 32 33 34 35
*/