#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,f=1;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		      printf("\n enter array elements  a[%d][%d]=",i,j);
		      scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		     if(i==j && a[i][j]!=1)
		     {
			f=-1;
		     }
		     else if(i!=j && a[i][j]!=0)
		     {
			f=-1;
		     }
		}
	}
	if(f==1)
	{
		printf("\n matrix is identical");
	}
	else
	{
		printf("\n matrix is not identical");
	}
	getch();
}









