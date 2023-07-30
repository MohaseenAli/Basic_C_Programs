#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,n,max;
	float avg;
	printf("enter n for no. of element :- ");
	scanf("%d",&n);
	printf("\nenter array element\n");
	for (i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
    {
     	if(a[i]>max)
        {
     		max=a[i];
		}
	}
	printf("\n\n==>Maximum=%d",max);
	getch();
}
