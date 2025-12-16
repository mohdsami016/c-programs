#include<stdio.h>
void rev_mat(int a[],int n)
{
	int i;
	for(i=n-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
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
	rev_mat(b,n);
	return 0;
}
