#include<stdio.h>
#include<string.h>
#include<conio.h>
void main ()
{
	char s0[] = "Mohaseen Ali ",s4[20],s[50];
	char s1[] = {'M','o','h','a','s','s','e','e','n','A','l','i'};
	char s2[] = {'M','o','h','a','s','s','e','e','n','\0','A','l','i'};
	char s3[] = {'T','h','a','v','r','a'};
	printf("%s %s %s\n",s0,s1,s2);
	puts(s2);
	printf("Enter any thing you want :- ");
	gets(s);
	puts(s);
	printf("%s\n\n",s);
	printf("Combine two string 's0' and 's3'\n==> ");
	puts(strcat (s0,s3));
	printf("\nLength of string 's1'\n");
	printf("==> %d",strlen(s1));
	printf("\n\nReverse string 's1'\n==> ");
	puts(strrev(s1));
	printf("\nCopy string 's3' into 's4'\n==> ");
	puts(strcpy(s4,s3));
	printf("\nCompare 2 string (s3,s0) & (s0,s1)\n");
	printf("==> %d\n",strcmp(s0,s3));
	printf("==> %d\n",strcmp(s1,s0));
}
