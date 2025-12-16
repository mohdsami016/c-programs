#include<stdio.h>
int main()
{
	int a[100],n,i,req;
	printf("enter array size\n");
	scanf("%d",&n);
	printf("enter array values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the required value\n");
	scanf("%d",&req);
	for(i=0;i<n;i++)
	{
		if(req==a[i])
		{
			printf("the required number %d is in %d",req,a[i]);
		}
	}
		else
		printf("the required number %d is not there in array",req);
	return 0;
}
