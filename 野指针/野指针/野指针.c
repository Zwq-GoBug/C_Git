
#include<stdio.h>
#include<malloc.h>
#include<string.h>

int main(void)
{
	char *ch_ptr;
	ch_ptr = NULL;
	//����100���ڴ�ռ� ���׵�ַ����ch_ptr
	ch_ptr = (char* )malloc(100);
	strcpy_s(ch_ptr, 15,"hello memory!\n");
	printf("%s", ch_ptr);
	if (ch_ptr != NULL)
	{
		free(ch_ptr);
	}
	ch_ptr = NULL;
	printf("%s", NULL);
	printf("%s\n", ch_ptr);
	printf("ָ�����char_ptr��ֵΪ: %p",ch_ptr);
	printf("\r\n");
	return 0;
}