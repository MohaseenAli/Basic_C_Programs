#include<stdio.h>
#include<conio.h> 
void main ()
{
	int a[3][3],D,i,j;
	printf("Enter element of matrix for their determinant:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{ 
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix A:\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		} 
		printf("\n");
	}	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{ 
	  D=a[0][0]*(a[2][2]*a[1][1]-a[1][2]*a[2][1])-a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])+a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
	    }
	}
	printf("determinant of matrix A=%d\n",D); 
	

	getch();
}
