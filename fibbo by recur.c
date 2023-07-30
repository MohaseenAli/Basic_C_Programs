#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i=0,j;
    printf("enter value of n :- ");
    scanf("%d",&n);
    for (j=1;j<=n;j++)
    {
	    printf("%d  ",fibbo(i));
	    i++;
    }
    getch();
}
int fibbo(int n)
{
    if(n==0)
	{
		return 0;
	}
	else if (n==1)
	{
		return 1;
	}
	else
	{
		return(fibbo(n-1)+fibbo(n-2));
	}
}

