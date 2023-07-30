#include<stdio.h>
#include<conio.h>
void main()
{
	int a,*p=&a;
	printf("enter value of a :-");
	scanf("%d",&a);
	printf("\nvalue of 'a' using pointer = %d\n",*p);
	printf("\n\naddress of 'a' using pointer = %d\n",p);
	getch();
	
}
