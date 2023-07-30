// write the program that given number is positive or negative
#include<stdio.h>
#include<conio.h>
void main()
{
	float a;
	printf("enter any number to check it is +ve or -ve:");
	scanf("%f",&a);
	if (a>0)
	{
		printf("%f is positive",a);
	}
	else
	{
		printf("%f is negative",a);
	}
	getch();
}
