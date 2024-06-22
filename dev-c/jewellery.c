#include<stdio.h>
int main()
{
	int a,choice,qty,total,totalamt;
	char ch;
	
	printf("\n jwellry shop");
	
	printf("\n user id:");
	scanf("%d",&a);
	
//	printf("\n ring \n breaclate \n chain \n necklace");
	
	do
	{
	menu:
	printf("\n------menu-----\n");
	printf("1 ring  price=180rs/pcs\n");
	printf("2 braclate price=100rs/pcs\n");
	printf("3 chain price=120rs/pcs\n");
	printf("4 neclace price=50rs/pcs\n");

	printf("\n please enter your choice:");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
		{
			printf("\n you have selected ring\n");
			printf("\nenter the qty:");
			scanf("%d",&qty);
			for(int i=1;i<=qty;i++)
			{
				total=180*qty;
			}
			printf("amount:%d",total);
			break;
		}
	case 2:
			{
				printf("\n you have selected bracelate\n");
				printf("\nenter the qty:");
				scanf("%d",&qty);
				for(int i=1;i<=qty;i++)
				{
					total=100*qty;
				}
				printf("amount:%d",total);
				break;
	    	}	
	case 3:
			{
				printf("\n you have selected chain\n");
				printf("\nenter the qty:");
				scanf("%d",&qty);
				for(int i=1;i<=qty;i++)
				{
					total=120*qty;
				}
				printf("amount:%d",total);
				break;
		    }
	case 4:
			{
				printf("\n you have selected necklace\n");
				printf("\nenter the qty:");
				scanf("%d",&qty);
				for(int i=1;i<=qty;i++)
				{
					total=50*qty;
				}
				printf("amount:%d",total);
				break;
			}
	default:
		{
			printf("not exist menu");
			printf("\n");
			goto menu;
			break;
		}
		}
		totalamt += total;
		printf("\n total amout is=%d ",totalamt);
		printf("\n do you want place more orders ? y & n: ");
		scanf("%s",&ch);
		
   }while(ch!='n');
   if(ch=='n');
   {
   		printf("\n your bill");
   		printf("\n total amount is = %d",totalamt);
   		printf("\n thank you..");
   		
   }
	return 0;
}