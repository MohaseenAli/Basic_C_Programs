#include<stdio.h>
#include<conio.h>
void add();
void mult();
void div();
void sub();
void mod();
void main(int num)
{
	printf(" enter number :-(1) ADDITION\n"
	       "                (2) MULTIPLICTION\n"
     	   "                (3) DIVISION\n"
		   "                (4) SUBSTRACTION\n"
	       "                (5) MODULO\n"
	       "==> ");
	scanf("%d",&num);
	switch(num)
	{
	  case 1 :	add();
	  break;
	  case 2: mult();
	  break;
	  case 3 : div();
	  break;
	  case 4 : sub();
	  break;
	  case 5 : mod ();
	  break;
	  default : printf("Choose from 1 to 5");
	  break;
}
	
	getch();
}
void add()
{
	int a,b,c;
	printf("enter a & b for addition:-");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf ("\n=>  %d+%d = %d",a,b,c); 
	printf("\n\n");
}
void mult()
{
	int a,b,c;
	printf("enter a & b for multiplication:-");
	scanf("%d%d",&a,&b);
	c=a*b;
	printf ("\n=>  %d*%d = %d",a,b,c);
	printf("\n\n");	
}
void div()
{
	int a,b;
	float c;
	printf("enter a & b for division:-");
	scanf("%d%d",&a,&b);
	c=(float)a/b;
	printf ("\n=>  %d/%d = %f",a,b,c);
	printf("\n\n");	
}
void sub()
{
	int a,b,c;
	printf("enter a & b for substraction:-");
	scanf("%d%d",&a,&b);
	c=a-b;
	printf ("\n=>  %d-%d = %d",a,b,c);
	printf("\n\n");	
}
void mod()
{
	int a,b,c;
	printf("enter a & b for modulo:-");
	scanf("%d%d",&a,&b);
	c=a%b;
	printf ("\n=>  %d%%%d = %d",a,b,c);
	printf("\n\n");	
}
