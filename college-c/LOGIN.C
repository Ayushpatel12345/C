#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char u[100]="abc@gmail.com",p[100]="12345";
 char u1[100],p1[100];
 printf("\n enter username:");
 scanf("%s",&u1);
 printf("\n enter password:");
 scanf("%s",&p1);
 if(strcmp(u,u1)==0 && strcmp(p,p1)==0)
 {
   printf("login sucessfully");
 }
 else
 {
   printf("login  not sucessfully");
 }
getch();
}
