#include<stdio.h>
int main()
{
	float cel,fah;
	printf("\n enter the temprature in celsius:");
	scanf("%f",&cel);
	
	fah=(1.8 * cel) + 32;
	printf("\n temprature in fahrenheit: %f",fah);
	return 0;
}