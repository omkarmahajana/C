#include<stdio.h>
void main()
{
    int l,b,h,a,v;
    float length,breath,height;
    printf("entre");
    scanf("%d%d%d",&l,&b,&h);
    b=(l*b)+(h*b)+(h*l);
    a=2*b;
    v=l*b*h;
    printf("\narea of the box:%f",b);
    printf("volume of the box: %f",v);
}