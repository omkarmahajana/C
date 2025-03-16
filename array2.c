#include<stdio.h>
void main()
{
    int i;
    int a[5];
    printf("\n enter the elements");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("\n array ");
    for(i=0;i<5;i++)
        printf("%4d",a[i]);
}