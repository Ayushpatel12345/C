#include<stdio.h>
#include<conio.h>
void main()
{
   int a[2][2],i,j;
   clrscr();
   printf("\n enter elements of matrix=");
   for(i=0;i<2;i++)
   {
	for(j=0;j<2;j++)
	{
		scanf("%d",&a[i][j]);
	}
   }
   printf("\n enter before transpose of matrix=\n");
   for(i=0;i<2;i++)
   {
	for(j=0;j<2;j++)
	{
		printf("\t %d",a[i][j]);
	}
	printf("\n");
   }
    printf("\n enter after transpose of matrix=\n");
   for(i=0;i<2;i++)
   {
	for(j=0;j<2;j++)
	{
		printf("\t %d",a[j][i]);
	}
	printf("\n");
   }
  getch();
}