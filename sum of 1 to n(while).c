#include<stdio.h>
int main()
{
	int i,n,sum;
	i=1;
	sum=0;
	printf("enter n value\n");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("sum=%d",sum);
	return 0;
}
