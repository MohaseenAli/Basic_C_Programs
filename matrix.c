#include<stdio.h>
#include<conio.h>
void main()
{ 
   int a[3][3],i,j; 
   printf("enter element:-");
   for (i=0;i<3;i++)
   {
   	for (j=0;j<3;j++)
	   {
   	        scanf("%d",&a[i][j]);
	   }
   } 
   printf("matrix A:\n");
    for (i=0;i<3;i++)
   {
   	for (j=0;j<3;j++)
	   {
   	      printf("\t%d",a[i][j]);
	   }
	    printf("\n\n");
   }
   getch();
}
