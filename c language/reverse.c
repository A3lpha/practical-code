#include<stdio.h>
int main()
{
	char str[50];
	char*rev;
	printf("REVESI PROGRAM\n:");
	scanf("%s",str);
	rev=strrev(str);
	printf("reverse string is:%s",rev);
	return 0;
}
