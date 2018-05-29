#include<stdio.h>
#include<string.h>
//#include<malloc.h>

char *getStr1()
{
	char *p1 = "abcdef";
	return p1;
}

char *getStr2()
{
	char *p2 = "abcdef";
	return p2;
}


int main(void)
{
	char *p1 = NULL;
	char *p2 = NULL;

	p1 = getStr1();
	p2 = getStr2();
	if( (strcmp(p1, p2)) == 0 )
		printf("字符串相等！\n");
	else
		printf("不相等！\n");

	return 0;
}