#include<stdio.h>
void main()
{
    int x,y;
    printf("x vs y greatest number");
    scanf("%d%d",&x,&y);
    printf("\n %s",x<0? "x":(x>0? "y" ));
}