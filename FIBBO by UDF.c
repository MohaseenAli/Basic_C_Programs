#include<stdio.h>
void fibbo ();
void main ()
{
	fibbo();
	getch();
}
void fibbo ()
{
	int i,n,a=0,b=1,c;
	printf("enter n :- ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("%d  ",a);
		c=a+b;
		a=b;
		b=c;
	}
}
