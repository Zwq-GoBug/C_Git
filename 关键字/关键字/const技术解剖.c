#include<stdio.h>
int main01(void)
{
	int const i = 100;
	int *p0 = NULL;

	p0  = &i;
	printf("%s", NULL);
	printf("�޸�ǰi��ֵΪ��%d\n", i);
	//��ͼ�޸�i��ֵ
	*p0 = 50;
	printf("�޸ĺ�i��ֵΪ��%d\n", i);
	return 0;
}