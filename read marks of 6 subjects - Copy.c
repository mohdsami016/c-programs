#include<stdio.h>
int main()
{
	int sub[100],i,j;
	printf("enter marks of 6 subjects\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&sub[i]);
	}
	for(j=0;j<6;j++)
	{
		printf("the marks of subjects:%d\n",sub[j]);
	}
	return 0;
}
