#include<stdio.h>
void bubble_sort(int a[],int n)
{
	int temp,i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("The sorted elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
int binary_search(int b[],int n,int s)
{
	int i,j,L=0,h=n-1,mid;
	while(L<=h)
	{
		mid=(L+h)/2;
		if(s==b[mid])
		{
			return mid;
		}
		else if(b[mid]<s)
		{
			L=mid+1;
		}
		else
		h=mid-1;
	}
	if(L>h)
	return -1;
}
int main()
{
	int c[30],n,search,i,j;
	printf("enter array size\n");
	scanf("%d",&n);
	printf("enter elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&c[i]);
	}
	printf("enter element to search\n");
	scanf("%d",&search);
	bubble_sort(c,n);
	if(binary_search(c,n,search)==-1)
	printf("element not found\n");
	else
	printf("%d is found at index %d\n",search,binary_search(c,n,search));
	return 0;
}
