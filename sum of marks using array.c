#include<stdio.h>
int main()
{
	int a[100],n,sum=0,i;
	printf("enter array size\n");
	scanf("%d",&n);
	printf("enter array values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("the sum of marks of all subjects is %d",sum);
	return 0;
}
