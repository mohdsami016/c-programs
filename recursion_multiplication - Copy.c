#include<stdio.h>
int multiply(int a,int b)
{
	if(b==0)
	return 0;
    if
	return a+multiply(a,b-1);
	else
	return a+multiply(a,-b);
}
int main()
{
	int x,y;
	printf("enter x,y values\n");
	scanf("%d%d",&x,&y);
	printf("%d is multiplication",multiply(x,y));
	return 0;
}
