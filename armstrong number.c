#include<stdio.h>
int main()
{
	int rev=0,rem,org,n;
	printf("enter n value\n");
	scanf("%d",&n);
	org=n;
	while(n!=0)
	{
		rem=n%10;
		rev=(rev)+(rem*rem*rem);
		n=n/10;
	}
	if(rev==org)
	printf("%d is a armstrong number",org);
	else
	printf("%d is not a armstrong number",org);
	return 0;
}
