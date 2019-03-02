#include<stdio.h>
int main01(void)
{
	int const i = 100;
	int *p0 = NULL;

	p0  = &i;
	printf("%s", NULL);
	printf("修改前i的值为：%d\n", i);
	//试图修改i的值
	*p0 = 50;
	printf("修改后i的值为：%d\n", i);
	return 0;
}