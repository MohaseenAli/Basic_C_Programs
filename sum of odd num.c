//write a program to find the sum of first N odd number (eg:-1+3+5+......+N)
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	printf("write any number:-");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		sum=sum+i;
	}
		printf("\n sum of odd number upto %d is %d",n,sum);
	
	getch();
}
