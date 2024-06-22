#include<stdio.h>
int main()
{
	int choice;
	float area,r,h,w,b;
	printf("\n 1.circle \n 2.rectangle \n 3.triangle  \n");
	printf("\n enter choice :");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\n enter the radius of circle:");
			scanf("%f",&r);
			area=3.14*r*r;
			printf("\n area of circle : %.2f",area);
			break;
		
		case 2:
			printf("\n enter the height :");
			scanf("%f",&h);
			printf("\n enter the weight :");
			scanf("%f",&w);
			area=h*w;
			printf("\n area of recatangle : %.2f",area);
			break;
		case 3:
			printf("\n enter the base :");
			scanf("%f",&b);
			printf("\n enter height :");
			scanf("%f",&h);
			area=0.5*b*h;
			printf("\n area of triangle : %.2f",area);
			break;
	}
	return 0;	
}
