#include<stdio.h>
int expo(int x,int n)
{
    if(n==1)
        return x;
    else
        return x*expo(x,n-1);
}
void main()
{
    int b,e;
    printf("\n enter base and exponent");
    scanf("%d%d",&b,&e);
    printf("\n address =%d",expo(b,e));
}

