#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,r;
	printf("write any no. for there reverse:");
	scanf("%d",&n);
	while(n>0)
	{
	    r=n%10;
      	sum=sum*10+r;
      	n=n/10;
	}
	  printf("reverse=%d",sum);
	  
	  getch();
}
