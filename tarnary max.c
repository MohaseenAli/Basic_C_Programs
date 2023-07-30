#include<stdio.h>
#include<conio.h>
void main()
{
	int D,a,b,c;
    printf("enter value of a,b & c:-");
    scanf("%d%d%d",&a,&b,&c);
    D=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("max=%d",D);
    getch();
}
