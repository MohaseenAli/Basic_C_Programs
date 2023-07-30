#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	printf("Entre Any Two Numbers: ");
	scanf("%d%d", &a, &b);
	printf("Sum is %d",sumWithPerameter(a,b));
	printf("\n\nEntre Any Two Numbers: ");
	scanf("%d%d", &c, &d);
	printf("\nmult is %d",multWithPerameter(c,d));
	
	getch();
}

int sum(){
	
	int a,b;
	
	printf("Enter Any Two numbers: ");
	scanf("%d %d", &a, &b);
	
	printf("Sum is %d\n", a+b);
}
int mult()
{ 
    int c,d;
    
    printf("\nenter any to number:\n");
    scanf("%d%d",&c,&d);
    
    printf("multiplication is %d",c*d);
      
}
int sumWithPerameter(int a, int b){
	return a+b;}
	
int multWithPerameter(int c, int d){
	return c*d;	
}






