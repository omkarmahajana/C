#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int gamer,pc;
    printf("entre choise(1.stone 2.paper 3.seasor)");
    scanf("%d",&gamer);
    {
    if(gamer>3||gamer<1)
        printf("invalid choice");
    else
        pc=rand()%3+1;
         printf("\n pc:- %d ",pc);
    }
    {
    if(gamer==pc)
        printf("tie");
    else if((gamer==1&&gamer==3)||(gamer==2&&gamer==1)||(gamer==3&&gamer==2))
        printf("you won");
    else
        printf("computer won");
    }
    return 0;
}