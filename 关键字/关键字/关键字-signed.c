#include<stdio.h>
typedef unsigned char uchar;
typedef unsigned int uint;


int main00(void)
{
	enum MyEnum
	{
		mon=1,
		tue,
		wed,
		thr,
		fri,
		sta

	}x,y,z;
	const int MAX_SIZE = 100;		//只读常量可通过指针修改其值
	int *p = &MAX_SIZE;
	*p = 20;
	printf("MAX_SIZE's value：%d\n", MAX_SIZE);
	char ch = '?';
	uint size = 0;
	x = sta;
	size = sizeof(ch);
	printf("枚举中的sta值：%d\n", x);
	printf("unsigned char类型占%d个字节\n", size);
	printf("int 类型占%d个字节\n", sizeof(double));

	return 0;
}