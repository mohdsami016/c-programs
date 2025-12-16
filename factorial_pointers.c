#include<stdio.h>
int main()
{
	int i,fact=1,n,*p;
	printf("enter number to find factorial\n");
	scanf("%d",&n);
	p=&fact;
	for(i=1;i<=*p;i++)
	{
		fact=fact*i;
	}
	printf("%d is factorial\n",*p);
	return 0;
}
