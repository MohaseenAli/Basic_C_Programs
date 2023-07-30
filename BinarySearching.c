#include<stdio.h>
#include<conio.h>
#include<math.h>
void main ()
{
	int i,key,mid,a[20]={1,2,3,4,5,7,8,11,14,56,69,98,108,143,156,172,198,299,334,435};
	printf("element in array is 1,2,3,4,5,7,8,11,14,56,69,98,108,143,156,172,198,299,334,435\n\n");
	printf("Take element from above for searching their index :- ");
	scanf("%d",&key);
	mid=ceil((0+19.0)/2);
	if (key==a[mid])
	{
		printf("\n\n==> Index of element '%d' is '%d'",key,mid);
	}
	if (key<a[mid])
	{
		for(i=0;i<mid;i++)
		{
			if(key==a[i])
			{
				printf("\n\n==> Index of element '%d' is '%d'",key,i);
				break;
			}
		}
	}
	else
	{
		for(i=mid+1;i<=19;i++)
		{
			if(key==a[i])
			{
				printf("\n\n==> Index of element '%d' is '%d'",key,i);
				break;
			}
		}
	}
	getch();
}
