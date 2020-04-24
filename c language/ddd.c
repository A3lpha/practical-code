#include<stdio.h>
int main()
{
	
	printf("odd or even program\n");
	int number;
	printf("enter an integer: ");
	scanf("%d",  &number);
	
	if(number % 2 == 0)
	printf("%d is even.", number);
	else
	printf("%d is odd.",number);
	
	return 0;
}
