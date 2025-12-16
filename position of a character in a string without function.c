#include<stdio.h>
int main()
{
	char st[20],ch;
	int flag=0,i;
	printf("enter a string\n");
	gets(st);
	printf("enter a character\n");
	scanf("%c",&ch);
	for(i=0;st[i]!='\0';i++)
	{
		if(st[i]==ch)
		{
			printf("THE POSITION OF %c IS IN INDEX %d\n",ch,i);
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("not found\n");
	return 0;
}
