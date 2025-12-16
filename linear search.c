#include<stdio.h>
int linear_search(int a[],int search,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(search==a[i])
		{
			return i;
		}
	}
	if(i==n)
	return -1;
}
int main()
{
	int b[20],m,s,i;
	printf("enter array size\n");
	scanf("%d",&m);
	printf("enter array elements\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
    }
    printf("enter elements to search\n");
    scanf("%d",&s);
    if(linear_search(b,s,m)==-1)
    {
    	printf("%d not found\n");
	}
	else
	printf("%d is found at %d position\n",s,linear_search(b,s,m));
	return 0;
}
