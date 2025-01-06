#include<stdio.h>
void main()
{
    int x,y;
    printf("enter the number");
    scanf("%d%d",&x,&y);
    printf("\n addition:%d",x+y);
    printf("\n substraction:%d",x-y);
    printf("\n multiplication:%d",x*y);
    printf("\n mod:%d",x%y);
    printf("\n exact division :%f",(float)x/y);
}