#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("abc.txt","r");
	printf("enter data to file\n");
	do
	{
		ch=getc(fp);
		putc(ch,fp);
	}while(ch!='@');
	fp=fopen("abc.txt","r");
	while((ch=getc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}
