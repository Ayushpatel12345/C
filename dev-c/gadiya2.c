#include<stdio.h>
int main()
{
	int i,n,j;
	printf("enter number:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d X %d = %d\t",j,i,j*i);
		}
		printf("\n");
    }		
	return 0;
}

