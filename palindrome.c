#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,r,t;
	printf("write any no. to check it is palindrome or not:");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
	    r=n%10;
      	sum=sum*10+r;
      	n=n/10;
	}
	if (sum==t)
	{
	  printf("%d is palindrome number",sum);
	  }
	  else
	  {
	  	printf("%d is not palindrome number",sum);
	  }
	   getch();
	  
}
