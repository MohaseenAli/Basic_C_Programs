#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	printf("enter any number:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{ 
	   for (j=i;j>=1;j--)
	   printf("*");
	
	   printf("\n");
	}
	   getch();
}

