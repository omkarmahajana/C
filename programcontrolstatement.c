//program control statement
// 1. unconditional program control statement
// GOTO  

#include<stdio.h>
void main()
{
    printf(" \n hello");
    printf(" \n hii");
    goto jump1;
    printf(" \n welcome");
    printf(" \n best friends");
    jump1: printf(" \n c language");
    printf(" \n friend ");
}
// brake, switch case
#include<stdio.h>
void main()
{
    int a;
    printf("\n enter the number");
    scanf("%d",&a);
    switch(a)
    {
        case 0:printf("\n zero");
                break;
        case 1:printf("\n one");
                break;
        case 2:printf("\n two");
                break;        
        case 3:printf("\n three");
                break;
        case 4:printf("\n four");
                break;
        case 5:printf("\n five");
                break;
        case 6:printf("\n six");
                break;
        case 7:printf("\n seven");
                break;
        case 8:printf("\n eight");
                break;
        case 9:printf("\n nine");
                break;
        case 10:printf("\n ten");
                break;
    }
} 
// continue
// return
// if
#include<stdio.h>
void main()
{
    float p;
    printf("enter the percentage");
    scanf("%f",&p);
    if(p>=70)
        printf("\n distiction");
    else if(p>=60)
        printf("\n 1st class");
    else if(p>=50)
        printf("\n 2nd class");
    else if(p>=40)
        printf("\n 3rd class");
    else 
        printf("\n fail");
}
// if_else
#include<stdio.h>
void main()
{
    int a;
    printf("\n enter the number");
    scanf("%d",&a);
    if(a%2==0)
        printf("\n even");
    else
        printf("\n odd");
}
//while
#include<stdio.h>
void main()
{
    int i=1;
    while(i<=10)
    {
        printf("\n omkar");
        i++;
    }
}
// do_while
#include<stdio.h>
void main()
{
    int i=1;
    do
    {
        printf("\n hello world");
        i++;
    }
    while(i<=10);
} 
// for loop
#include<stdio.h>
void main()
{
    int a=5,i;
    for(i=5;i>0;i++)
    printf("\n %d",a++);
}

    
