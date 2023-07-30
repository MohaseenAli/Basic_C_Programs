#include<stdio.h>
#include<conio.h>

void main()
{
	int i,a;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("Even Numbers:");
	for(i=0;i<=a;i++)
	{
		if(i%2==0){
			printf("%d", i);
		}
		printf("\n");
	}
	
	printf("Odd Numbers:");
	for(i=0;i<=a;i++)
	{
		if(i%2==1){
			printf("%d", i);
		}
		printf("\n");
	}
}
