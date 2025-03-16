#include<stdio.h>
void main()
{
    int b,e,expo(int,int);
    printf("\n enter the base and exponent");
    scanf("%d%d",&b,&e);
    printf("\n exponential=%d",expo(b,e));
}
int expo(int x,int n)
{
    int r=1;
    while(n>0)
    {
        r=r*x;
            n--;
    }
    return r;
}