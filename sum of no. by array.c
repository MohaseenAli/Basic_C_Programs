#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,n,sum=0;
	printf("enter the n for no. of element:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("\nsum=%d",sum);
}
