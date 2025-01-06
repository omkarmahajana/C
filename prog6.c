#include<stdio.h>
void main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    printf("\n number is %s",x%2==0?"even":"odd");
}
