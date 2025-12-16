#include<stdio.h>
int add(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
int main()
{
	int a,b,res;
	printf("enter a and b values\n");
	scanf("%d%d",&a,&b);
	printf("result is %d",add(a,b));
	return 0;
}
