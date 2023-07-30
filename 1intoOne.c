#include<stdio.h>
#include<conio.h>
void main()
{
	int t,n,sum=0;
	printf("Enter Value : ");
	scanf("%d", &n); 
	while(n>0)
    {
		t=n%10;
		sum=sum*10+t;
	    n=n/10;
	}
    n=sum;
	while(n>0)
    {
		t=n%10;
		sum=sum*10+t;
	switch(t)
	{
    	case 0:
    		printf("zero ");
    		break;
    		
    	case 1:
    		printf("one ");
    		break;
    		
    	case 2:
    		printf("two ");
    		break;
    		
    	case 3:
    		printf("three ");
    		break;
    		
    	case 4:
    		printf("four ");
    		break;
    		
    	case 5:
    		printf("five ");
    		break;
    		
    	case 6:
    		printf("six ");
    		break;
    		
    	case 7:
    		printf("seven ");
    		break;
				
    	case 8:
    		printf("eight ");
    		break;
				
    	case 9:
    		printf("nine ");
    	    break;
    	    
    	default:
    		printf("enter number");
	}
	n=n/10;
	}
	getch();
}

