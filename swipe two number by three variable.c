#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a,b;
	printf("write any two number to swipe them:- ");
	scanf("%d%d",&a,&b);
	printf("\n\t=> before swiping a=%d and b=%d",a,b);
	{
		i=a;
		a=b;
		b=i;
		printf("\n\n\n\t=> after swiping a=%d and b=%d",a,b);
    }
	getch();
}
