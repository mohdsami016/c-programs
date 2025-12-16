#include<stdio.h>
int main()
{
	int a[2][2],k,i,j,sum[10][10];
	printf("enter matrix values\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("THE TRANSPOSE OF MATRIX IS:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
