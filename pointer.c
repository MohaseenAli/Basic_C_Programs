#include<stdio.h>
#include<conio.h>
void main()
{
	int a=7,*p=&a,*u=NULL;
	printf("address of %d is %p \n",a,p);
	printf("address of %d is %p \n",a,p+1);
	printf("address of %d is %p \n",a,p-1);
	printf("address of %d is %x \n",a,p);
	printf("address of %d is %d \n",a,p);
	printf("address of pointer to 'a' is %p \n",&p);
	printf("At address %p the value of a = %x\n",p,*p);
	printf("address of null pointer %d \n",u);
}
