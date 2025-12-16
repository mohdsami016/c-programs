#include<stdio.h>
int main()
{
	int a[100],n,sum=0,x,i,maxmarks;
	float percentage;
	printf("enter array size\n");
	scanf("%d",&n);
	printf("max marks for each subject\n");
	scanf("%d",&maxmarks);
	printf("enter array values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	x=maxmarks*n;
	percentage=((float)sum/x)*100;
	printf("the sum of marks=%d\n",sum);
	printf("the max marks=%d\n",x);
	printf("the percentage of student is %f\n",percentage);
	return 0;
}
	
