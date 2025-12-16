#include<stdio.h>
int main()
{
	int a,b,Temp;
	printf("enter two values\n");
	scanf("%d%d",&a,&b);
	Temp=a;
	a=b;
	b=Temp;
	printf("the value of a=%d and value of b=%d\n",a,b);
	return 0;
}
