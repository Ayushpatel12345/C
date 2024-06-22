#include<stdio.h>
 void swap();
 int main()
 {
 		swap(); 
 		return 0;
 }
 void swap()
 {
 	int a,b;
 	printf("\n enter a:");
 	scanf("%d",&a);
 	printf("\n enter b:");
 	scanf("%d",&b);
 	printf("\nbefore swapping a:%d and b:%d\n",a,b);
 	a=a+b;
 	b=a-b;
 	a=a-b;
 	printf("\n after swapping a:%d and b:%d",a,b);
 }
 
