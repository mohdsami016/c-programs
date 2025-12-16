#include<stdio.h>
int fib(int n)
{
	if(n==0||n==1)
	return n;
	else
	return fib(n-1)+fib(n-2);
}
int main()
{
	int n;
	printf("enter n value\n");
	scanf("%d",&n);
	printf("%d is fib element",fib(n));
	return 0;
}
