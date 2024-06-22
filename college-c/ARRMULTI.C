#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][2],b[2][2],c[2][2],i,j,k;
	clrscr();
	printf("\n enter 1st elements of matrix=");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n enter 2nd  elements of matrix=");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=0;
			for(k=0;k<2;k++)
			{
			c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("\n enter 1st and 2nd matrix multiplication=\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t %d",c[i][j]);
		}
			printf("\n");
	}
	getch();
}