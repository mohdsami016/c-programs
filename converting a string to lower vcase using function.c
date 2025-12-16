#include<stdio.h>
#include<string.h>
int main()
{
	char st[20];
	printf("enter a string\n");
	gets(st);
	strlwr(st);
	puts(st);
	return 0;
}
