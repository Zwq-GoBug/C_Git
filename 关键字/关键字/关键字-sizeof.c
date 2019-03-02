#include<stdio.h>

int main(void)
{
	int *p = NULL;
	int  i = 0;
	int n_size = 0;
	n_size = sizeof i;
	printf("指针变量占的字节数为：%d\n", n_size);
	printf("%d", *p);
	//printf("%d\n", sizeof(*p);
	return 0;
}