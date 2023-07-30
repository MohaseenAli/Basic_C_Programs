//to find the roots of equation ax^2+bx+c
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
float a,b,c,D,x1,x2;

  printf("enter a,b,c to find the roots of equation:");
  scanf("%f%f%f",&a,&b,&c);

  D=(b*b)-4*a*c;
  
  if(D>0)
  {
  	x1=(-b+sqrt(D)/2*a);
  	x2=(-b-sqrt(D)/2*a);
  	printf ("roots are %f and %f",x1,x2);
  }
  else
  {
  	printf("roots are not real");
  }
  
  getch();
  
}
