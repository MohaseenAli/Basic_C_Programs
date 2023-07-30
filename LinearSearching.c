#include<stdio.h>
#include<conio.h>
void main ()
{
	int i,key,a[20]={124,54,24,99,121,34,325,345,5,109,25,45,235,23,1,64,5,12,27,43};
	printf("element in array is 124,54,24,99,121,34,325,345,5,109,25,45,235,23,1,64,5,12,27,43\n\n");
	printf("Take element from above for searching their index :- ");
	scanf("%d",&key);
	for(i=0;i<20;i++)
	{
		if(a[i]==key)
		{
			printf("\n\n==> Index of element '%d' is '%d'",key,i);
			break;
		}
	}
	getch();
}
