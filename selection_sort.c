#include<stdio.h>
void selection_sort(int a[],int n)
{
	int i,j,min,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(i!=min)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
int main()
{
	int b[20],i,n;
	printf("enter array size\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("The sorted elements are\n");
	selection_sort(b,n);
}
