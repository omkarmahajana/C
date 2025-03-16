#include<stdio.h>
int x;
void main()
{
    int f;
    int getfact();
    printf("\n enter the number");
    scanf("%d",&x);
    f=getfact();
    printf("\n factorial=%d",f);
}
int getfact()
{
    int fact=1,i;
    for(i=1;i<=x;i++)
    fact=fact*i;
    return fact;
}
