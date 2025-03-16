#include<stdio.h>
void main()
{
    int x,y;
    int *p,*q;
    p=&x;
    q=&y;
    *p=175;
    *q=x+300;
    *p=x+y;
    y=*p+*q+x;
    printf("\n x=%d",x);
    printf("\n y=%d",y);
}