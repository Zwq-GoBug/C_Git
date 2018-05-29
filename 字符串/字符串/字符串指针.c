#include<stdio.h>
#include<string.h>
struct mystruct
{
	char name[4];
	char age;
	char Height;
	char Weight;
};

int main(void)
{
	struct  mystruct a;
	char *ch_ptr0 = "ZWQ";
	char *ch_ptr1 = "HELLO CHAR POINTER!";
	int size = 0;
	for (int i = 0;i < 3;i++)
	{
		a.name[i] = *ch_ptr0;
		ch_ptr0++;
	}
	size = sizeof(a.name) / sizeof(a.name[0]);
	while (*ch_ptr1)
	{
		printf("%c",*ch_ptr1);
		ch_ptr1++;
	}
	printf("\r\n");
	for (int i = 0; i < size; i++)
	{
		printf("%c", a.name[i]);
	}
	printf("\r\n");
	return 0;

}

