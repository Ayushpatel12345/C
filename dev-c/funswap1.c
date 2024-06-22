#include<stdio.h>

int swap(int a,int b);

int main()
{
	int a,b;
	printf("\nenter the first number:");
	scanf("%d",&a);
	printf("\nenter the second number:");
	scanf("%d",&b);
	printf("\nbefore swapping a:%d and b:%d\n",a,b);
	swap(a,b);
	return 0;
}

int swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\nafter swapping a:%d and b:%d ",a,b);
}
