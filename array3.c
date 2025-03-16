#include<stdio.h>
#define N 20
void main()
{
    int i,n;
    int a[N],b[N];
    printf("\n hours many elements");
    scanf("%d",&n);
    printf("\n enter array elements");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    printf("\n array 1");
    for(i=0;i<n;i++)
        printf("%4d",a[i]);
    printf("\n array 2");
    for(i=0;i<n;i++)
        printf("%4d",b[i]);
}