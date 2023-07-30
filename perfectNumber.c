#include<stdio.h>
#include<conio.h>

void main(){
	int a, sum=0,i;
	printf("Enter Number : ");
	scanf("%d", &a);
	
	for(i=1;i<a;i++){
		if(a%i==0){
			sum = sum + i;
		}
	}
	
	if(a==sum){
		printf("This is Perfect Number");
	}
	else{
		printf("This is not Perfect Number");
	}
		
}
