#include<stdio.h>
int trace_mat(int a[10][10],int r, int c)
{
	int i,j,sum=0;
	for(i=1;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	return sum;
}
int main()
{
	int i,j,b[10][10],r,c;
	printf("enter array size\n");
	scanf("%d%d",&r,&c);
	printf("enter array values\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("%d is trace of array",trace_mat(b,r,c));
	return 0;
}
