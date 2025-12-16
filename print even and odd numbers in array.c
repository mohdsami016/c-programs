#include<stdio.h>
int main()
{
	int a[100],n,i,even=0,odd=0;
	printf("enter array size\n");
	scanf("%d",&n);
	printf("enter array values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			even++;
		}
		else
		odd++;
	}
	printf("the even numbers in array=%d",even);
	printf("the odd numbers in array=%d",odd);
	return 0;
}
