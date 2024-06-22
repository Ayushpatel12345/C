#include<stdio.h>
void swap(int *,int *);
int main()
{
	int a,b;
	printf("enter the number a and b:");
	scanf("%d%d",&a,&b);
	printf("\nbefore swaping a:%d and b:%d\n",a,b);
	swap(&a,&b);
	printf("\nafter swaping a:%d and b:%d\n",a,b);
	return 0;
}
void swap(int *a , int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}








