#include<stdio.h>
int main()
{
	float cp,sp,profit,loss;
	printf("\n\n enter selling price=");
	scanf("%f",&sp);
	printf("\n\n enter cost  price=");
	scanf("%f",&cp);
	if(sp>cp)
	{
		profit=sp-cp;
		printf("\nprofit is %f rupee",profit);
	}
	else
	{
		loss=cp-sp;
		printf("\nloss is %f rupee",loss);	
	}
	return 0;
}