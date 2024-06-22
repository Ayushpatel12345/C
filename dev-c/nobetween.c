#include<stdio.h>
int main()
{
	int i,sum=0;
	printf("print no between 101 to 200 divisble by 9=");
	for(i=101;i<=200;i++)
	{
		if(i%9==0)
		{		
		printf("\n%d",i);
		sum=sum+i;
		}
	}
	printf("\n\n sum:%d",sum);
	return 0;
}
