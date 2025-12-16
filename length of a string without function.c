#include<stdio.h>
int main()
{
	char st[10];
	int i,l;
	printf("enter a string\n");\
	gets(st);
	for(i=0;st[i]!='\0';i++)
	{
		l++;
	}
	printf("the length of string is %d\n",l);
	return 0;
}
