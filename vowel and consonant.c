#include<stdio.h>
int main()
{
	char ch;
	printf("enter alphabet\n");
	scanf("%c",&ch);
	if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
	{
		printf("alphabet is vowel");
	}
	else
	printf("alphebet is consonant");
	return 0;
}
