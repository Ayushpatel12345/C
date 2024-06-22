#include<stdio.h>
int main()
{
	int i,n,sum=0;
	float avg;
	printf("\n enter 1st 10 natural number=\n\n");
	for(i=1;i<=10;i++)
	{
			printf("%d ",i); 
		scanf("%d",&n);
		sum = sum + n;
	}
	avg=sum/10.0;
	printf("\n\n sum is = %d\n average is=%f\n",sum,avg);
	return 0;
}
