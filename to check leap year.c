//check weather the year is leap year or not
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("write an year to check it leap year or not:- ");
	scanf("%d",&a);
	if (a%4==0)
	{
		printf("%d is leap year",a);
	}
	else
	{
		printf("%d is not a leap year",a);
	}
	getch();
}
