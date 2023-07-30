#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	printf("enter any number");
	scanf("%d",&n);
	for(i<0;i<=n;i++)
	{ 
	   for (j=1;j<=i;j++)
	   printf("%d ",j);
	
	   printf("\n");
	}
	   getch();
	   for(i=n;i>=1;i--)
	{ 
	   for (j=n;j>=1;j--)
	   printf("%d ",j);
	   n--;
	   printf("\n");
	}
}
