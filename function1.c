#include<stdio.h>
int x,y;
void main()
{
    int sum;
    int getsum();
    printf("\n enter  the 2 number");
    scanf("%d%d",&x,&y);
    sum=getsum();
    printf("\n sum=%d",sum);
}
int getsum()
{
    return x+y;
}