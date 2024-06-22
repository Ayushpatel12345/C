#include<stdio.h>
int main()
{
	int i,n,sum=0;
	float avg;
	printf("enter number:");
	scanf("%d",&n);
	for(i=1;i<=5;i++)
	
	{
		printf("\t %d=",i);	
	
	scanf("%d=",&n);
	sum +=n;
	}
		
	avg=sum/5;
	printf("\n sum=%d \n avgerage=%f",sum,avg);
	return 0;
}
