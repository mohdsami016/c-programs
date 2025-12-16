#include<stdio.h>
int main()
{
	int a[20][20],b[20][20],i,k,j,r,c,R,C,m[20][20];
	printf("enter rows and columns of matrices\n");
	scanf("%d%d%d%d",&r,&c,&R,&C);
	if(c==R)
	{
		printf("enter elments of first matrix\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("enter elements of second matrix\n");
		for(i=0;i<R;i++)
		{
			for(j=0;j<C;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<C;j++)
			{
				m[i][j]=0;
			 for(k=0;k<c;k++)
			 {
				m[i][j]=m[i][j]+a[i][k]+b[k][j];
			 }
			}
		}
		printf("the new matrix is:\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<C;j++)
			{
				printf("%d ",m[i][j]);
			}
			printf("\n");
		}
	}
	else
	printf("the multiplication of matrices is not possible");
	return 0;
}
