#include<stdio.h>
#include<conio.h>
void main()
{
	int n,j=0,i=0,a[32];
	printf("enter any number to convert into binary :- ");
	scanf("%d",&n);
	printf("\n\n==> binary of %d is ",n);
	while(n>0)
	{
		a[i]=n%2;
		n=n/2;
		i++;
		j++;
	}
	for (i=j-1;i>=0;i--)
	printf("%d",a[i]);
	getch;
}
