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
	const int MAX_SIZE = 100;		//ֻ��������ͨ��ָ���޸���ֵ
	int *p = &MAX_SIZE;
	*p = 20;
	printf("MAX_SIZE's value��%d\n", MAX_SIZE);
	char ch = '?';
	uint size = 0;
	x = sta;
	size = sizeof(ch);
	printf("ö���е�staֵ��%d\n", x);
	printf("unsigned char����ռ%d���ֽ�\n", size);
	printf("int ����ռ%d���ֽ�\n", sizeof(double));

	return 0;
}