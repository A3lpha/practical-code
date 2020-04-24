#include<stdio.h>
int main()
{
	int age;
	printf("input your age:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("you can vote");
	}
	else
	{
		printf("you are not eligible for voting");
	}
	return 0;
}
