#include<stdio.h>
void main()
{
    int x,y,ch,r;
    printf("enter the 2 number");
    scanf("%d%d",&x,&y);
    printf("enter the choise");
    scanf("%d",&ch);
    r=(ch==1?("x+y"):(ch==2?("x-y"):(ch==3?("x*y"):(ch==4?("x/y"):(ch==5?("x%y"):"error")))));
    printf("%d",r);
}