#include<stdio.h>
#include<conio.h>
int main()
{
	char u[200]="abc@gmail.com",p[200]="12345";
	char u1[200],p1[200];
	
	printf("\n enter USERNAME:");
	gets(u1);
	printf("\n enter PASSWORD:");
	gets(p1);
	(strcmp(u,u1)==0 && strcmp(p,p1)==0) ? printf("\nlogin sucessfully") : printf("\nlogin not sucessfully");
	return 0;
}