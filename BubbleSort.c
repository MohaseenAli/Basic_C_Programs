#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,temp,n;
	printf("Enter no. of array you want :- ");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
	{
		printf("Enter element in array :- ");
		scanf("%d",&a[i]);
	}
	printf("\n\nBEFORE SORTING THE VALUES IN ARRAY IS\n\n");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for (i=0;i<n-1;i++)
	{
		for (j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\n\nAFTER SORTING THE VALUES IN ARRAY IS\n\n");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
