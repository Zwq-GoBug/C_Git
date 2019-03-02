#include<stdio.h>
#define PRODUCT_SIZE 28
typedef struct
{
	char	product[PRODUCT_SIZE];
	int		quantity;
	float	uint_price;
	float	total_amount;
}Transaction;

void print_receipt(Transaction *trans);

int main(void)
{
	Transaction Trans;
	for (int i = 0;i < PRODUCT_SIZE;i++)
	{
		Trans.product[i] = 95+i;
	}
	Trans.quantity = 10;
	Trans.total_amount = 20.5;
	Trans.uint_price = 42.3;
	print_receipt(&Trans);
	return 0;
}

void print_receipt(Transaction *trans)
{
	printf("%s\n", trans->product);
	printf("%d @ %.2f total %.2f\n", trans->quantity
	,trans->uint_price,trans->total_amount);

}