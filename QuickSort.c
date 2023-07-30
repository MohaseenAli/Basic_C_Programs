#include<stdio.h>
#include<conio.h>
void main()
{
	int k,i,j,pivot,temp,temp1,a[10]={32,45,10,76,8,9,0,2,21,12};
	pivot=a[0],i=0,j=9;
	for (k=0;k<10;k++)
	{
		printf("%d ",a[k]);
	}
	printf("\n\n");
	while(i<=j)
	{
		while(a[i]<pivot)
		{
			i++;
		}
		while(a[j]>pivot)
		{
			j--;
		}
		if(i<=j)
		{
			a[i]=temp;
			a[i]=a[j];
			a[j]=temp;
		}
		pivot=temp1;
		pivot=a[j];
		a[j]=temp1;
	}
	for (k=0;k<10;k++)
	{
		printf("%d ",a[k]);
	}
}
