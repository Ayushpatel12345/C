#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][2],b[2][2],c[i][j],i,n,j;
	clrscr();
	printf("\n enter first elements=\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n...... matrix..... \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		   printf("\t %d",a[i][j]);
		}
		{
		printf("\n");
		}
	}
	printf("\n enter 2nd elements=\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n...... matrix..... \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		   printf("\t %d",b[i][j]);
		}
		{
		printf("\n");
		}
	}

getch();
}
