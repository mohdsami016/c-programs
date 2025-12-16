#include<stdio.h>
int sum_digits(int n)
{
	int rem,sum=0;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	return sum;
}
int main()
{
	int x;
	printf("enter a number\n");
	scanf("%d",&x);
	printf("%d is sum of digits of given number",sum_digits(x));
	return 0;
}
