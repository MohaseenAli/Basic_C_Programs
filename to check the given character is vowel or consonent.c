//write the program to check whether the given character is vowels or conconent
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("enter any chracter from a to z to check it is vowel or consonent:");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
	{
		printf("character is vowel");
	}
	else
	{
		printf("chracter is consonent");
	}
	getch();
}
