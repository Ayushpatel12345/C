#include<stdio.h>

float square(float num);

int main()
{
	float num;
	 
	printf("\nenter number:");
	scanf("%f",&num);
	
	printf("\narea of %.2f square is:%.2f",num,square(num));
	return 0;
}

float square(float num)
{
	return num*num;
}