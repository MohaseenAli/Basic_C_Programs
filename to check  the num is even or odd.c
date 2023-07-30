#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("write any number to check it's odd or even:-");
	scanf("%d",&a);
	if (a%2 == 0)
	{
		printf("%d is a even number",a);
	}
	else
	{
		printf("%d is a odd number",a);
	}
	getch();
}
