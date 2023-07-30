#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("enter value of n to find it's factorial:-");
	scanf("%d",&n);
	printf("\n==> factorial of %d is %d",n,fact(n));
	getch();
}
int fact(int n)
{
	if (n==0)
	{
	    return 1;
	}
	else
	{
		return ( n*fact(n-1));
	}
}

