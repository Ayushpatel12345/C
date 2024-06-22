#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n enter three side of triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && b==c)
	{
			printf("triangle is equilateral");	
	}
	else if(a==b || b==c || c==a)
	{
		printf("triangle is isosceles");
	}
	else
	{
		printf("triangle is scalene");
	}
return 0;
}