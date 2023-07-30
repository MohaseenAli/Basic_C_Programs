#include<stdio.h>
#include<conio.h>
void main ()
{
	int a,b;
	printf("Enter 2 number a & b :- ");
	scanf("%d%d",&a,&b);
	printf("\n\n==> Value of a = %d and b = %d\n\n",a,b);
	fun(&a,&b);
	printf("==> After operation (a=a+b) & (b=a-b) value of a = %d & b = %d",a,b);
	getch();
}
int fun(int *x , int *y)
{
	int t;
	t = *x - *y;
	*x = *x + *y;
	*y = t;
}
