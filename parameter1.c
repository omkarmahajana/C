#include<stdio.h>
void main()
{
    int x,f;
    int getfact(int);
    printf("\n enter the number");
    scanf("%d",&x);
    f=getfact(x);
    printf("\n functional=%d",f);
}
int getfact(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    fact=fact*i;
    return fact;
}
