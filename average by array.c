#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a[n],i,sum=0;
	float avg;
	printf("enter the n for no. of element:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("\nEnter Array element :- ");
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
        avg=(float)sum/n;
	}
	printf("\nAverage = %f",avg);
	getch();
}
