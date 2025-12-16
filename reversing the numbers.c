#include<stdio.h>
int main()
{
	int n=234,sum=0,rem;
	while(n>0)
	{
		rem=n%10;
		sum=(sum*10)+rem;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}
