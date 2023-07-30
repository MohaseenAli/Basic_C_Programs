#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,t=1;
	for(i=1;i<=4;i++)
	{ 
	   for (j=1;j<=i;j++)
	   {
		 printf("%d ",t);
	     t++;
		}
	    printf("\n");
	}
	   getch();
}
