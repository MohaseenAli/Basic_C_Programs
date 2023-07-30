#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	printf("enter n:-");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{ 
	   for (j=1;j<=i;j++)
    	{
	    	if(j%2==0)
	            {
        		    printf("0 ");
                }
            else
                {
                	printf("# ");
         	    }
        
        }
         printf("\n");
    }
	   getch();
}
