#include<stdio.h>
void main()
{
	int x,y;
	void swap(int,int);
	printf("enter a number:\n");
	scanf("%d%d",&x,&y);
	printf("before swap x=%d,y=%d",x,y);
	swap(x,y);
	printf("\n after swap x=%d,y=%d\n",x,y);
}
void swap(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

