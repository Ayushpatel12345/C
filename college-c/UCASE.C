#include<stdio.h>
#include<conio.h>

void main()
{
   int n;
   clrscr();
   printf("\n enter any number:");
   scanf("%d",&n);
   if(n>=65&&n<=90)
   {
     printf("\n no is uppercase");
   }

   else
   {
       printf("\n no is lowercase");
   }
   getch();
}