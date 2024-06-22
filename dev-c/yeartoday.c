#include<stdio.h>
int main()
{
	int day,year;
//	printf("\n enter the no of days:");
//	scanf("%d",&day);
//	{
//		year=day/365;
//		day=day%365;
//		printf("\n year:%d and day:%d",year,day);
//	}
	printf("\n enter the no of years:");
	scanf("%d",&year);
	{
		day=year*365;
		printf("\n day:%d",day);
	}
	return 0;
}
