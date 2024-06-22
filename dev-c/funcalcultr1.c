#include<stdio.h>

float add(float a,float b);
float sub(float a,float b);
float mul(float a,float b);
float div(float a,float b);

int main()
{
	float a,b;
	
	printf("\n enter the first number:");
	scanf("%f",&a);
	printf("\n enter the second number:");
	scanf("%f",&b);
	
	printf("\n addition of %.2f and %.2f is:%.2f\n",a,b,add(a,b));
	printf("\n subtraction of %.2f and %.2f is:%.2f\n",a,b,sub(a,b));
	printf("\n multiplication of %.2f and %.2f is:%.2f\n",a,b,mul(a,b));
	printf("\n division of %f and %f is:%.2f",a,b,div(a,b));
	return 0;	
} 

float add(float a,float b)
{
	return a+b;
}
float sub(float a,float b)
{
	return a-b;
}
float mul(float a,float b)
{
	return a*b;
}
float div(float a,float b)
{
	return a/b;
}