#include<stdio.h>
int main()
{
	char st1[10],st2[10];
	int i,j;
	printf("enter string 1\n");
	gets(st1);
	printf("enter string 2\n");
	gets(st2);
	for(i=0,j=0;st2[j]!='\0';i++,j++)
	{
		st1[i]=st2[j];
	}
	puts(st1);
	return 0;
}
