#include<stdio.h>
int main()
{
	int a[3][3],i,j,n;
	
	printf("\n enter array element:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n before transpose matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n after transpose matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}