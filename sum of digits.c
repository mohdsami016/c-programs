#include<stdio.h>
int main()
{
	int r,sum=0,n;
	printf("enter n value\n");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("sum of digits of given number=%d",sum);
	return 0;
}
