#include<stdio.h>
int main()
{
	int a,b;
	printf("\n enter no 1: ");
	scanf("%d",&a);
	printf("\n enter no 2: ");
	scanf("%d",&b);
	printf("\n before swaping a=%d and b=%d \n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n after swaping a=%d and b=%d  \n",a,b);
	return 0;
}
