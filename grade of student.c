#include<stdio.h>
int main()
{
	float p;
	printf("enter p");
	scanf("%f",&p);
	if(p>90)
	{
		printf("A grade");
	}
	else if((p<90)&&(p>=80))
	{
		printf("B grade");
	}
	else if((p<80)&&(p>=70))
	{
		printf("C grade");
	}
	else if((p<70)&&(p>=60))
	{
		printf("D grade");
	}
	else if((p<60)&&(p>=50))
	{
		printf("E grade");
	}
	else
	printf("fail");
	return 0;
}
