#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter number 1=");
	scanf("%d",&a);
	printf("enter number 2=");
	scanf("%d",&b);
	printf("before swapping a=%d and b=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("after swapping a=%d and b=%d\n",a,b);
	
}
