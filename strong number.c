#include<stdio.h>
int main()
{
	int i,n,fact,r,sum=0,org;
	printf("enter n value\n");
	scanf("%d",&n);
	org=n;
	while(n!=0)
	{
		r=n%10;
		{
			for(fact=1,i=1;i<=r;i++)
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(sum==org)
	{
	printf("%d is a strong number",org);
    }
	else
	printf("%d is not a strong number",org);
	return 0;
}
