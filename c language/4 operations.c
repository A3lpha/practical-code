#include<stdio.h>
int main()
{
	int first, second, third, add, substract, multiply;
	float divide;
	printf("enter three integers\n");
	scanf("%d %d %d", &first, &second, &third);
	add = first + second + third;
	sub = first - second ;
	multiply = first * second * third;
	divide = first /(float) second /(float) third;
	
	printf("sum = %d\n", add);
	printf=("difference = %d\n", subtract);
	printf("multiplication = %d\n", multiply);
	printf("division = %.2f\n", divide);
	return 0;
}
