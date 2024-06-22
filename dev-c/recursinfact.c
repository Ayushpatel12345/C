#include<stdio.h>

int fact(int n);

int main()
{
     int n;
     printf("\n enter the value of n:");
     scanf("%d",&n);
         printf("factorail is: %d",fact(n));
}
int fact(int n)
{
    if(n==0)
    {
        return 1;    
    }
int factn=fact(n-1);
int factN=factn*n;
return factN;
}
