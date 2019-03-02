#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "Stack.h"
//#define N 5

int string_len(char *string);
typedef struct StackRecord *Stack;


int main01(void)
{
	Stack S;
	char ch[] = "hello world";
	char *c = ch;
	int str_len;
	int N;
	//strlen();
	str_len = string_len(ch);
	printf("字符串的长度为：%d\n", str_len);

	for ( N = 0;N < strlen(ch);N++)
		printf("%c", ch[N]);
	printf("\n\n");
		
	return 0;
}

#include <stdio.h>

void FeiBo(int N);


int main(void)
{
	FeiBo(3);
	return 0;
}


void FeiBo(int N)
{
	return N < 2 ? N : FeiBo(N - 1) + FeiBo(N - 2);
}


//自己实现的测量字符串的函数
int string_len(char *string)
{
	int length = 0;
	while (*string++ != '\0')
		length += 1;
	return length;
}