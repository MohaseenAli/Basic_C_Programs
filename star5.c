#include<stdio.h>
#include<conio.h>
void main()
{
   	int i,j,k,n;
	printf("enter any number:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
	   for (j=n-i;j>=1;j--)
	   {
	   printf("  ");
	   } 
	   
	   for (k=1;k<=i;k++)
	  {
	    printf("*   ");
	  } 
	   printf("\n");
	} 
	 
    getch();
}
