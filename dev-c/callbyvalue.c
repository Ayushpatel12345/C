#include<stdio.h>
void swap(int,int);
int main()
{
	int a,b;
	printf("\n enter the number a and b:");
	scanf("%d%d",&a,&b);

	printf("\n before swapping a:%d and b:%d\n",a,b);
	swap(a,b);

}
void swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\nafter swaping a:%d and b:%d",a,b);
}