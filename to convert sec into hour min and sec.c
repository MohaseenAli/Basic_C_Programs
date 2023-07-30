//write a program to convert second into hour, minute and second
#include<stdio.h>
#include<conio.h>
void main()
{
	int h,m,s;
	printf("write a number to convert second into hour:minute:second :-");
	scanf("%d",&s);
	h=s/3600;
	s=s%3600;
	m=s/60;
	s=s%60;
	printf("%dhour:%dminute:%dsecond",h,m,s);
	getch();
}
