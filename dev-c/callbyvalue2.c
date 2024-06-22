#include<stdio.h>

void mul(int n1,int n2);

int main()
{
	int n1,n2;
	printf("\n enter the number1:");
	scanf("%d",&n1);
	printf("\n enter the number2:");
	scanf("%d",&n2);
	mul(n1,n2);
	return 0;
}

void mul(int n1,int n2)
{
	int c;
	c=n1*n2;
	printf("\nmultiplication is:%d",c);
}
