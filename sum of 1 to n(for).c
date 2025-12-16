#include<stdio.h>
int main()
{
	int i,sum,n;
	sum=0;
	printf("enter n value\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
		printf("sum=%d",sum);
	return 0;
}
