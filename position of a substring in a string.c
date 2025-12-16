#include<stdio.h>
int main()
{
	char st[30],subst[30];
	int i,j;
	printf("enter a string\n");
	gets(st);
	printf("enter a sub string\n");
	gets(subst);
	for(i=0;st[i]!='\0';i++)
	{
		for(j=0;subst[j]!='\0';j++)
		{
			if(st[i+j]!=subst[j])
			break;
		}
		if(subst[j]=='\0')
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
