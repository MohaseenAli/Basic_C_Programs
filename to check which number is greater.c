#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("write three number a,b and c to check which number is greater:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("%d is greater then %d and %d",a,b,c);
	}
	if (b>a && b>c)
	{
		printf("%d is greater then %d and %d",b,a,c);
	}
	if (c>a && c>b)
	{
		printf("%d is greater then %d and %d",c,a,b);
	}
	getch();
}

