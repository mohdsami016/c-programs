#include<stdio.h>
int main()
{
	int a[10][10],i,r,c,j,trace=0;
	printf("enter rows and columns size\n");
	scanf("%d%d",&r,&c);
	printf("enter elements of matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				trace=trace+a[i][j];
			}
		}
	}
	printf("the trace of matrix is %d",trace);
	return 0;
}
