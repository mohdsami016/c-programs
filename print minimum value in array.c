#include<stdio.h>
int main()
{
	int a[100],n,i,min;
	printf("enter array size\n");
	scanf("%d",&n);
	printf("enter array values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("the minimum value in array is %d",min);
	return 0;
}
