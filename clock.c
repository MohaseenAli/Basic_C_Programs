#include<stdio.h>
#include<conio.h>
void main()
{
  int h,m,s;
  printf(" enter current time in hour minutes seconds :- ");
  scanf("%d%d%d",&h,&m,&s);
  start:;
  for(h;h<24;h++)
    {
  	    for(m;m<60;m++)
  	        {
	            for(s;s<60;s++)
	                {
						printf("%d : %d : %d\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n",h,m,s);
					    sleep(1);	    
                    }
                    s=0;
            }
            m=0;
    }
	h=0;
	goto start;  
	getch();
}

