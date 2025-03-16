#include<stdio.h>
void main()
{
    int x=2000;
    int *p;
    p=&x;
    printf("\n x=%d",x);
    printf("\naddress of  x=%u",&x);
    printf("\n x=%d",*p);
    printf("\n address of x=%u",p);
}