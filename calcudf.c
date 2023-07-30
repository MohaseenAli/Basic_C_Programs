#include<stdio.h>
#include<conio.h>
void calc(int a,int b);
void main()
{
	int a,b;
	printf("enter a & b:-");
	scanf("%d%d",&a,&b);
	calc(a,b);
	getch();
}
void calc(int a, int b)
{
	int t,c;
	float d;
	printf("\nenter choice:- (1) addition\n               (2) subtraction\n               (3) multiplication\n               (4) modulo\n               (5) division\n\n=> ");
	scanf("%d",&t);
	printf("\n");
	switch(t)
	{
	    case 1:
		c=a+b;
		printf("=> Addition = %d",c);
		break;
		
		case 2:
		c=a-b;
		printf("=> subtraction = %d",c);
		break;
		
		case 3:
		c=a*b;
		printf("=> multiplication = %d",c);
		break;
		
		case 4:
		c=a%b;
		printf("=> modulo = %d",c);
		break;
		
		case 5:
		d=(float)a/b;
		printf("=> division = %f",d);
		break;		
	}
}
