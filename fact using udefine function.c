#include<stdio.h>
int fact(int n)
{
	int fact=1,i;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int main()
{
	int j;
	printf("enter a number\n");
	scanf("%d",&j);
	printf("%d is factorial of given number\n",fact(j));
	return 0;
}
