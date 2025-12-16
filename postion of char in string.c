#include<stdio.h>
int main()
{
	char st[30],ch;
	int i,flag=0;
	printf("enter a string\n");
	gets(st);
	printf("enter the character\n");
	scanf("%c",&ch);
	for(i=0;st[i]!='\0';i++)
	{
		if(st[i]==ch)
		{
			printf("the position of %c is %d",ch,i);
		 flag=1;
		 break;
		}
	}
	if(flag==0)
	printf("not found");
	return 0;
}
