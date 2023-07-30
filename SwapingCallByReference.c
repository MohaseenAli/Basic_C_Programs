#include<stdio.h>
#include<conio.h>
//int swap(int *x, int *y);
void main()
{
	int a,b;
	printf("Enter two number to swap :- ");
	scanf("%d%d",&a,&b);
	printf("\n\n\n*-*-*-*-*-*-*-*-*-*-*-****CALL BY REFERENCE****-*-*-*-*-*-*-*-*-*-*-*\n");
	printf("\n\n==> Before swaping value of a = %d and b = %d\n\n",a,b);
	swap(&a,&b);
	printf("==> After swaping value of a = %d and b = %d",a,b);
	printf("\n\n\n\n\n*-*-*-*-*-*-*-*-*-*-*-*-****CALL BY VALUE****-*-*-*-*-*-*-*-*-*-*-*-*\n");
	printf("\n\n==> Before swaping value of a = %d and b = %d\n\n",a,b);
	swap1(a,b);
	printf("==> After swaping value of a = %d and b = %d",a,b);
	getch();
}
int swap(int *x,int *y)
{
    *y = *x + *y;
    *x = *y - *x;
    *y = *y - *x;
}
int swap1(int x,int y)
{
    y = x + y;
    x = y - x;
    y = y - x;
}

