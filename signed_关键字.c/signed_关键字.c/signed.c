#include<stdio.h>
#include<string.h>
//#include<>
int main00(void)
{
	char a[1000];
	int i = 0;
	for (i = 0;i < 1000;i++)
	{
		a[i] = -1 - i;
	}
	printf("数组a的长度为：%d\n", strlen(a));
	return 0;
}


int main(void)
{
	int i = -20;
	unsigned int j = 10;
	int *p = NULL;
	printf("%p", p);
	printf("%d\n", i + j);
	return 0;
	
}

