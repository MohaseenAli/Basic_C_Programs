#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,c,a=0,b=1;
	printf("enter number of term you want in fibonacci series :- ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d  ",a);
		c=a+b;
		a=b;
		b=c;
	}
	getch();
}
