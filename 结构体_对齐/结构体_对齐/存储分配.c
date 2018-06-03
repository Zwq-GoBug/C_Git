#include<stdio.h>
#include<stddef.h>
#include<string.h>
#include<malloc.h>

int main(void)
{
	struct ALIGN0
	{
		char a;
		int  b;
		char c;
	};

	struct ALIGN1
	{
		int  a;
		char b;
		char c;
	};

	int size = 0;
	struct ALIGN0  A0;
	struct ALIGN1  A1;

	printf("整型的字节数为：%d\n", sizeof(int));

	size = sizeof(A0);
	printf("结构体ALIGN0的长度为：%d\n", size);

	size = sizeof(A1);
	printf("结构体ALIGN1的长度为：%d\n", size);
	const char *ptr = "0123456789\0";			//定义一个常字符串
	printf("字符串的的长度为：%d\n",strlen(ptr));	//'/0'不计算进去
	//printf("0x%p\n", ptr);
	return 0;
}