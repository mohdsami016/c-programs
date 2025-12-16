#include<stdio.h>
int maxnum_mat(int a[],int n)
{
	int i,max;
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}
int main()
{
	int i,b[10],n;
	printf("enter array size\n");
	scanf("%d",&n);
	printf("enter array values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("%d is maximum value of array",maxnum_mat(b,n));
	return 0;
}
