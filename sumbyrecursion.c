#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("enter valuve of n:-");
	scanf("%d",&n);
	printf("\n\n-> sum of 0 to %d is '%d'",n,sum(n));
	getch(); 
}
int sum(int n)
{
	if (n==0)
	{
	    return 0;
	}
	else
	{
		return (n+sum(n-1));
	}
}

