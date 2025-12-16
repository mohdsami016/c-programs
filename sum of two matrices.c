#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],i,j,sum[10][10],R1,C1,R2,C2;
	printf("enter rows and columns of two matrices\n");
	scanf("%d%d%d%d",&R1,&C1,&R2,&C2);
	if((R1==R2)&&(C1==C2))
	{
    printf("enter first matrix values\n");
	for(i=0;i<R1;i++)
	{
		for(j=0;j<C1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter second matrix values\n");
	for(i=0;i<R2;i++)
	{
		for(j=0;j<C2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<R1;i++)
	{
		for(j=0;j<C1;j++)
		{
		  sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("the resultant matrix is:\n");
	for(i=0;i<R1;i++)
	{
		for(j=0;j<C1;j++)
		{
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
    }
    else
    printf("the sum of matrices is not possible");
	return 0;
}
