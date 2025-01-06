#include<stdio.h>
void main()
{
    int r;
    float area,circumferance;
    printf("enter radius");
    scanf("%d",&r);
    area=3.14*r*r;
    circumferance=2*3.14*r;
    printf("\n area =%f",area);
    printf("\n circumferance=%f",circumferance);
}