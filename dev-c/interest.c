#include<stdio.h>
int main()
{
	float p,r,n,si;
	printf("\n enter the principal :");
	scanf("%f",&p);
	printf("\n enter the rate :");
	scanf("%f",&r);
	printf("\n enter the number :");
	scanf("%f",&n);
	
	printf("\n simple interest is : %.2f",si=p*r*n/100);
	
	return 0;
}
