#include<stdio.h>
void oddeven();
int main()
{
	oddeven();
	return 0;
}
void oddeven()
{
	int n;
	printf("\n enter no:");
	scanf("%d",&n);
	(n%2==0) ? printf("\n no is even") : printf("\n no is odd");
}
