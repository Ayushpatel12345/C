#include<stdio.h>
#include<string.h>
int main()
{
	int r,p,c,ca,tot;
	float per;
	char nos[20];
	
	printf("\n enter rollno:");
	scanf("%d",&r);
	printf("\n enter name of student:");
	scanf("%s",&nos);
	printf("\n enter marks in phy:");
	scanf("%d",&p);
	printf("\n enter marks in chem:");
	scanf("%d",&c);
	printf("\n enter marks in computer app:");
	scanf("%d",&ca);
	
	tot=p+c+ca;
	per=tot/3;
	printf("\n total marks:%d \t total percantage:%f",tot,per);
	
	if(per>80)
	{
		printf("\t div:a++");
	}
	else if(per>70 && per<=80)
	{
		printf("\t div:a");
	}
	else if(per>55 && per<=70)
	{
		printf("\t div:b");
	}
	else if(per>33 && per<=55)
	{
		printf("\t div:c");
	}
	else
	{
		printf("\n\n div:e");
	}
	
	printf("\n\n \t---------student marksheet-----------\t");
	printf("\n\n rollno : %d",r);
	printf("\t\t name of student : %s",nos);
	printf("\n\n marks in physics : %d",p);
	printf("\t marks in chemestry : %d",c);
	printf("\t marks in computer app : %d",ca);
	printf("\n\n total marks: %d",tot);
	printf("\t per : %f",per);
	
	return 0;
}
