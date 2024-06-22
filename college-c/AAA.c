#include<iostream.h>
#include<conio.h>
void main()
{
	int i,n,j;
	char ch='a';
	clrscr();
	cout<<"\n enter a number=";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    ch='a';
	    for(j=1;j<=i;j++)
	   {
		      cout<<ch<<" ";
		      ch++;
	   }
	    cout<<"\n";
	   //ch++;
	 }
getch();
}