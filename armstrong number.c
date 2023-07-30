#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,sum=0,t;
	printf("write any number to check wether it is armstrong number or not :- ");
	scanf("%d",&n);
	t=n;
	while (n>0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if (sum==t)
	{
		printf("\n\n==> %d is an armstrong number",t);
	}
	else
	{
		printf("\n\n==> %d is not an armstrong number",t);
	}
	getch();
}
