//To count no. of +ve ,-ve and 0 value from 3*3 matrix
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,p=0,z=0,n=0;
	printf("enter element of matrix A:-");
   for (i=0;i<3;i++)
   {
   	for (j=0;j<3;j++)
	   {
   	        scanf("%d",&a[i][j]);
	   }
   }
    for (i=0;i<3;i++)
   {
   	for (j=0;j<3;j++)
	   {
	   	if(a[i][j]>0)
	   	   {
	   		p++;
		   }
		else if(a[i][j]<0)
		   {
		 	n++;
		   } 
		else if(a[i][j]==0)
		   {
		 	z++;
		   }   
	   }
   } 
       printf("positive=%d\n",p);
       printf("negative=%d\n",n);
       printf("zero=%d\n",z);
   getch();
}

