#include<stdio.h>
int main()
{
	float n,d,div;
	printf("enter numerator and denominator");
	scanf("%f%f",&n,&d);
	if(d!=0)
	{
		div=n/d;
		printf("division=%f\n",+div);
	}
	else 
	printf("you have entered 0 in denominator try with another value");
	return 0;
}

