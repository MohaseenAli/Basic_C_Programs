//To find the factorial of any number
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum,n;
	    printf("enter any number for there factorial:");
	    scanf("%d",&n);
   	for(i=1;i<=n;i++)
	{
		sum=sum*i;
	}
	
	printf("\n\n-> factorial of %d is %d",n,sum);
	
	getch(); 
}
