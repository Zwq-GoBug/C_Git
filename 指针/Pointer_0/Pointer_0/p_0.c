#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "Stack.h"
//#define N 5

int string_len(char *string);
typedef struct StackRecord *Stack;


int main(void)
{
	Stack S;
	char ch[] = "hello world";
	char *c = ch;
	int str_len;
	int N;
	strlen();
	str_len = string_len(ch);
	printf("�ַ����ĳ���Ϊ��%d\n", str_len);

	for ( N = 0;N < strlen(ch);N++)
		printf("%c", ch[N]);
	printf("\n\n");
		
	return 0;
}


//�Լ�ʵ�ֵĲ����ַ����ĺ���
int string_len(char *string)
{
	int length = 0;
	while (*string++ != '\0')
		length += 1;
	return length;
}