//write a program to fin max of two num using if else statement
//#include<stdio.h
#include<conio.h>
void main()
{
	int a,b;
	printf("enter two numbers a,b:-");
	scanf ("%d%d",&a,&b);
	if (a>b)
	{
	printf("%d is greater then %d",a,b);
	}
	else 
	{
		printf("%d is greater then %d",b,a);
	}
	getch();
}
