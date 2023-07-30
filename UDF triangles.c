#include<stdio.h>
#include<conio.h>
void triangle();
void main()
{
    triangle(); 
    getch();
}
void triangle()
{
    int t,i,j,k,n;
    printf(" Choice:- (1) half upward triangle\n\n          (2) half downward triangle\n\n          (3) upward triangle\n\n          (4) downward triangle\n\n          (5) upward downward triangle\n\n          (6) kite\n\n\n==> Write the choice which you want :- ");
    scanf("%d",&t);
    printf("\n\n=> Enter 'n':- ");
    scanf("%d",&n);
    printf("\n");
    switch(t)
    {
    case 1:
        for (i=1;i<=n;i++)
        {
        	for(j=1;j<=i;j++)
            {
		        printf("* ");
            }
            printf("\n");
        }
        break;
        
    case 2:
        for (i=1;i<=n;i++)
        {
        	for(j=i;j<=n;j++)
            {
		        printf("* ");
            }
            printf("\n");
        }
        break;
        
    case 3:
        for (i=1;i<=n;i++)
        {
        	for(j=n-i;j>=1;j--)
            {
		        printf("  ");
            }
            for(k=1;k<=i;k++)
            {
		        printf("*   ");
            }
            printf("\n");
        }
        break;
        
    case 4:
        for (i=n;i>=1;i--)
        {
        	for(j=n-i;j>=1;j--)
            {
		        printf("  ");
            }
            for(k=1;k<=i;k++)
            {
		        printf("*   ");
            }
            printf("\n");
        }
        break;
        
    case 5:
        for (i=1;i<=n;i++)
        {
        	for(j=n-i;j>=1;j--)
            {
		        printf("  ");
            }
            for(k=1;k<=i;k++)
            {
		        printf("*   ");
            }
            printf("\n");
        }
        
         for (i=n;i>=1;i--)
        {
        	for(j=n-i;j>=1;j--)
            {
		        printf("  ");
            }
            for(k=1;k<=i;k++)
            {
		        printf("*   ");
            }
            printf("\n");
        }
        break;
        
    case 6:
        for (i=1;i<=n;i++)
        {
        	for(j=n-i;j>=1;j--)
            {
		        printf(" ");
            }
            for(k=1;k<=i;k++)
            {
		        printf("* ");
            }
            printf("\n");
        }
        
         for (i=n;i>=1;i--)
        {
        	for(j=n-i;j>=1;j--)
            {
		        printf(" ");
            }
            for(k=1;k<=i;k++)
            {
		        printf("* ");
            }
            printf("\n");
        }
        
         for (i=1;i<=n/2;i++)
        {
        	for(j=n-i;j>=1;j--)
            {
		        printf(" ");
            }
            for(k=1;k<=i;k++)
            {
		        printf("* ");
            }
            printf("\n");
        }
        break;
   }
}
