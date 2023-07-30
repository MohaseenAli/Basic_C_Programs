#include<stdio.h>
#include<conio.h>
void main()
{
	float i,n,sum=0;
	printf("write any number for there hermonic series:");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+1/i;
	}
	 printf("\n\nThe hermonic series of %f is %f",n,sum);
	 
	 getch();
}

