#include<stdio.h>
int main()
{
	int i,n,count=0;
	printf("enter n value\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("%d is prime number",n);
	}
	else
	printf("%d is not a prime number",n);
	return 0;
}
