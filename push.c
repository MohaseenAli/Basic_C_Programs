#include<stdio.h>
#include<conio.h>
void main()
{
	int i,x,n,top=0,s[top];
	printf("enter how much number of element you want in stack :- ");
	scanf("%d",&n);
	 for (i=0;i<=n;i++)
    {
	if (top>=n)
	{
		printf ("\nenter value in stack :- ");
		scanf("%d",&x);
		printf("\n\n\n**********value (%d) cannot be inserted because stack is full**********",x);
	}
	else
	{
		printf ("\nenter value in stack :- ");
		scanf("%d",&x);
    	s[top]=x;
		printf ("\ninserted element is %d\n",s[top]);
		top++;
	}
    }
}
