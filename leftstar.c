#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=6;i++)
    {
        for(j=i;j<6;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=5;i<=10;i++)
    {
        for(j=5;j<i;j++)
        {
            printf(" ");
        }
        for(k=i;k<=10;k++)
        {
            printf("*");
        }
        printf("\n");
    }

}
/*
     *
    **
   ***
  ****
 *****
******
******
 *****
  ****
   ***
    **
     *
*/