#include<stdio.h>
int x,y,ch;
void main()
{
    int r,calc();
    printf("\n enter 2 no.");
    scanf("%d%d",&x,&y);
    printf("\n enter your choise");
    scanf("%d",&ch);
    r=calc();
    if(r=-9999)
        printf("\n result=%d",r);
    else
        printf("\n inverlid choise=%d",r);
}
int calc()
{
    if(ch==1)
        return x+y;
    else if(ch==2)
        return x-y;
    else if(ch==3)
        return x*y;
    else if(ch==4)
        return x/y;
    else if(ch==5)
        return x%y;
    else
        return -9999;
}
