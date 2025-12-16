#include<stdio.h>
#include<string.h>
int main()
{
	char st1[10],st2[10];
	printf("enter string 1\n");
	gets(st1);
	printf("enter strring 2\n");
	gets(st2);
	strcpy(st1,st2);
	puts(st1);
	return 0;
}
