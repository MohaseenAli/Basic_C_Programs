#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a[50],sum=0;
	printf("enter value of n:");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("enter array element=");
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("\n\n=> sum=%d",sum);
	getch();
}
