#include<stdio.h>
int main()
{
	int i,n,odd=0,even=0;
	printf("enter the number:");
	scanf("%d",&n);
	
	printf("\n even number:");
	for(i=0;i<=n;i+=2)
	{
		if(i%2==0)
		{
		printf("\n%d",i);
		even++;
		}
	}
	printf("\n odd number:");
	for(i=1;i<=n;i+=2)
	{
		if(i%2==1)
		{
		printf("\n%d",i);
		odd++;
		}
	}
	printf("\n total even numbers:%d",even);
	printf("\n total odd numbers:%d",odd);
	return 0;
}