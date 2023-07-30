#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a[50],sum=0;
	printf("enter value of n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter array element :- ");
	    scanf("%d",&a[i]);
	}
	printf("\n\n==> ARRAY ELEMENTS ARE :-\n");
	for(i=0;i<n;i++)
	{
		printf("\t a[%d] = %d\n",i,a[i]);
	}
	printf("\n\n==> ARRAY ELEMENTS IN REVESRSE ORDER\n");
	for(i=n-1;i>=0;i--)
	{
		printf("\ta[%d] = %d\n",i,a[i]);
	}
	getch();
}
