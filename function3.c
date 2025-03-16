#include<stdio.h>
int n;
void main()
{
    int sum,digitsum();
    printf("\n enter the number");
    scanf("%d",&n);
    sum=digitsum();
    printf("\n sum of digit=%d",sum);
}
int digitsum()
{
    int s=0;
    while(n!=0)
    {
        s=s+n%10;
        n=n/10;
    }
    return s;
}