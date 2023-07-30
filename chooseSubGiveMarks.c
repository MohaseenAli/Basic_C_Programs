#include<stdio.h>
void main()
{
	int i,j;
    char sub[4][10]={"DS","DBMS","PAS","DF"};
    printf("SUBJECT CODE :- 'DS=0' , 'DBMS=1' , 'PAS=2', 'DF=3'\n\n");
	for(i=0;i<4;i++)
	{
	    printf("enter subject code :- ");
    	scanf("%d",&j);
    	
    	if(sub[j]==sub[0])
    	{
    		printf("\n==> Marks in DS = 84\n\n");
		}
		
		else if(sub[j]==sub[1])
    	{
    		printf("\n==> Marks in DBMS = 80\n\n");
		}
		
		else if(sub[j]==sub[2])
    	{
    		printf("\n==> Marks in PAS = 79\n\n");
		}
		
		else if(sub[j]==sub[3])
    	{
    		printf("\n==> Marks in DF = 89\n\n");
		}
	}
	getch();
}
