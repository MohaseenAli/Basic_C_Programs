#include<stdio.h>
#include<conio.h>

main(){
	int n,i,j,k;
	printf("enter any value :- ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		
		for(k=0;k<=n-i;k++)
		{
			printf("  ");
		}
		
		for(j=1;j<=n;j++)
		{
			printf("* ");
		}
		printf("\n");
	}	
	getch();
	
}
