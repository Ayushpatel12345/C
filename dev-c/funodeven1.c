#include<stdio.h>
int odevn(int n);

int main()
{
    int n;
    printf("enter number:");  
    scanf("%d",&n);
    odevn(n);
    return 0;
}
int odevn(int n)
{
    if(n%2==0)
    {
              printf("\n even no");
    }
    else 
    {
          printf("\n odd no");
    }
}
