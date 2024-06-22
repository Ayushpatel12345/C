#include<stdio.h>
#include<conio.h>
void main()
{
   char ch;
   clrscr();
   printf("\n enter inf=");
   scanf("%c",&ch);
   switch(ch)
   {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("vowel");
    break;
    default:
    printf("consonet");
    getch();
   }
}