#include<stdio.h>
#include<string.h>

void print_arr(int *arr_base, int arr_size);


int main(void)
{
	
	int int_arr[] = { 5,8,0,4,1,9 };
	int int_arr_size = 0;
	//��ʼ������ָ��(����Ļ���ַ)
	int int_arr_ptr = int_arr;
	//int int_arr_ptr = &int_arr[0];
	int_arr_size = sizeof(int_arr) / sizeof(int_arr[0]);

	printf("���������Ϊ:");
	print_arr(int_arr_ptr,int_arr_size);

	return 0;
}


//��ӡ��������
void print_arr(int *arr_base, int arr_size)
{
	int i;
	for (i = 0;i < arr_size;i++)
	{
		printf("%d ", arr_base[i]);
	}
	printf("\n");
}

