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

	printf("���͵��ֽ���Ϊ��%d\n", sizeof(int));

	size = sizeof(A0);
	printf("�ṹ��ALIGN0�ĳ���Ϊ��%d\n", size);

	size = sizeof(A1);
	printf("�ṹ��ALIGN1�ĳ���Ϊ��%d\n", size);
	const char *ptr = "0123456789\0";			//����һ�����ַ���
	printf("�ַ����ĵĳ���Ϊ��%d\n",strlen(ptr));	//'/0'�������ȥ
	//printf("0x%p\n", ptr);
	return 0;
}