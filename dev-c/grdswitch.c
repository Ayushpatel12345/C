#include<stdio.h>
int main()
{
	char grd;
	printf("enter character:");
	scanf("%c",&grd);
	
	grd = toupper(grd);
	switch(grd)
	{
		case 'E':
			printf("excellent");	
			break;
			
		case 'V':
			printf("very good");
			break;
			
		case 'G':
			printf("good");
			break;
		
		case 'A':
			printf("average");
			break;
			
		case 'F':
			printf("fail");
			break;
			
		default:
			printf("invalid grade");
	}	
return 0;	
}
