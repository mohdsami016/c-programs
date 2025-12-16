#include<stdio.h>
int main()
{
	int i,j,n,count=0;
	printf("enter n value\n");
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		if(j%i==0)
		{
			count++;
		}
		else
		if(count==2)
		{
		printf("%d",j);
		}
	}
	return 0;
}
