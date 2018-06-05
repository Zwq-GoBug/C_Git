#include<stdio.h>

typedef struct EX
{
	int a;
	char b;
	char c[10];
	struct EX *x;
}EX;

int main(void)
{
	int a[10] = { 0,1,2,3,4,8,7,-8,10,-1 };
	int *ptr = a;
	for (int i = 0;i < 10;i++)
	{
		printf("a[%d]: %d\n",i,*(ptr+i));
		//ptr++;
	}
	return 0;
}