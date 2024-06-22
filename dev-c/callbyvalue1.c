#include<stdio.h>

void add(int a,int b);

int main()
{
	int a,b;
	printf("\n enter the a:");
	scanf("%d",&a);
	printf("\n enter the b:");
	scanf("%d",&b);
	add(a,b);
	return 0;
}
void add(int a,int b)
{
	int n3;
	n3=a+b;
	printf("\nadd=%d",n3);

}