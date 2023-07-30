// write a program for a simple calculator (add,sub,mulp,div)
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	char choice;
	
	printf("Enter your Choice (+,-,*,/):");
	scanf("%c",&choice);
	
	printf("enter a and b:");
	scanf("%d%d",&a,&b);
	
	if(choice == '+')
	{
		printf("sum is %d",a+b);
    }
 
    else if(choice == '-')
	{
        printf("sub is %d",a-b);
	}

	else if(choice == '*')
	{
		printf("mul is %d",a*b);
	}
	
	else if(choice == '/')
	{
		printf("div is %f",(float)a/b);
	}
	else
	{
		printf("choose only (+,-,*,/)");
	}
	getch();
}
