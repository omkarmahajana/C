#include<stdio.h>
void main()
{
    int i;
    int a[]={10,20,30,40,50};
    printf("\n array in forward");
    for(i=0;i<5;i++)       
        printf("%4d",a[i]);
    printf("\n array in backward");
    for(i=4;i>=0;i--)
        printf("%4d",a[i]);
}