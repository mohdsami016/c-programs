#include<stdio.h>
int main()
{
	char st[30];
	int i;
	printf("enter a string\n");
	gets(st);
	for(i=0;st[i]!=0;i++)
	{
		if(st[i]>='a'&&st[i]<='z')
		{
			st[i]=st[i]-32;
		}
	}
	printf("the upper case string is :\n");
	puts(st);
	return 0;
}
