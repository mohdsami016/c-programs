#include<stdio.h>
int main()
{
	int n,r,org,rev=0;
	printf("enter n value\n");
	scanf("%d",&n);
	org=n;
	while(n!=0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}
	if(org==rev)
	printf("%d is a palindrome",org);
	else
	printf("%d is not a palindrome",org);
	return 0;
}
