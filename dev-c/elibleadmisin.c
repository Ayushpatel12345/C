#include<stdio.h>
int main()
{
	int  m,p,c,totl=m+p+c,mp=m+p;
	printf("\n eligibility to criteria");
	printf("\n mark in maths >=65");
	printf("\n mark in phy >=55");
	printf("\n mark in chem >=50");
	printf("\n total mark in three subject >=190 or ");
	printf("\n total math and phy >=140");
	
	printf("\n----------------------\n");
	
	printf("\n enter marks in maths:");
	scanf("%d",&m);
	printf("\n enter marks in phy:");
	scanf("%d",&p);
	printf("\n enter marks in chem:");
	scanf("%d",&c);
	printf("\n total mark in three subject:");
	scanf("%d",&totl);
	printf("\n total math and phy subject:");
	scanf("%d",&mp);
	{
		(m>=65 && p>=55 && c>=50 && m+p+c >=190 || m+p >=140) ? printf("\n eligible for admission") :  printf("\n not eligible for admission");
	}	
return 0;	
}	
