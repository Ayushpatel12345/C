#include<stdio.h>
#include<conio.h>
void main()
{
   int a[2][2],i,j;
   clrscr();
   printf("\n enter elements:");
   for(i=0;i<2;i++)
   {
      for(j=0;j<2;j++)
      {
      scanf("%d",&a[i][j]);
      }
   }
   printf("\n enter array ments: \n");
   for(i=0;i<2;i++)
   {
      for(j=0;j<2;j++)
      {
      printf(" %d",a[i][j]);
      }
      printf("\n");
   }
   getch();
}