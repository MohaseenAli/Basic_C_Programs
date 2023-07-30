#include<stdio.h>
#include<conio.h>
#define n 5

void main()
{
    void push(int[],int*,int);
    int pop(int[], int*);
    int peep(int[], int*, int);
    int change(int[],int*,int,int);
    int s[n], top=-1,x,i,ch=0,a;

    printf("1 for PUSH\n");
    printf("2 for POP\n");
    printf("3 for PEEP\n");
    printf("4 for CHANGE\n");
    
while (ch!=4)
{   
    do{
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter element for PUSH operation : ");
            scanf("%d", &x);
            push(s,&top,x);
            printf("You want to continue??\n Enter 0 to continue : \n Enter 1 to Terminate : ");
            scanf("%d", &a);
        break;

        case 2:
            a=pop(s,&top);      
            if(a==-1)
            printf("*********Stack Underflow********\n");
            else
            printf("%d is deleted\n",a);
            printf("You want to continue??\n Enter 0 to continue : \n Enter 1 to Terminate : ");
            scanf("%d", &a);
        break;

        case 3:
            printf("enter position of element to search:");
            scanf("%d",&i);
            a=peep(s,&top,i);
            if(a==-1)
            printf("*******Stack Underflow*******\n");
            else
            printf("the element is %d \n",a);
            printf("You want to continue??\n Enter 0 to continue : \n Enter 1 to Terminate : ");
            scanf("%d", &a);
        break;

        case 4:
            printf("enter position of element to change:");
            scanf("%d",&i);
            printf("enter element to change:");
            scanf("%d",&x);
            change(s,&top,x,i);
            printf("You want to continue??\n Enter 0 to continue : \n Enter 1 to Terminate : ");
            scanf("%d", &a);
        break;

        }
    }
    while (a==0);
} 
        
    getch();
}

void push(int s[], int*top, int x)
{
    if(*top>=n-1)
    {
        printf("**********Stack Overflow************\n");
    }
    else
    {
        *top=*top+1;
        s[*top]=x;
        printf("%d is inserted\n",x);
    }
}

int pop(int s[], int*top)
{
    if(*top<0)
    {
        return -1;
    }
    else
    {
        *top=*top-1;
        return s[*top+1];
    }
}

int peep(int s[], int*top, int i)
{
    if(*top-i+1<0)
    {
        return -1;
    }
    else
    {
        return s[*top-i+1];
    }
}

int change(int s[],int*top,int x,int i)
{
    if(*top-i+1<0)
    {
        printf("stack is under flow on change\n");
    }  
    else
    {
        s[*top-i+1]=x;
    } 
}
