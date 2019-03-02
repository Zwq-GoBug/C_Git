#include <stdio.h>

void FeiBo(int N);


int main(void)
{
	FeiBo(3);
	return 0;
}
	

void FeiBo(int N)
{
	return N < 2 ? N:FeiBo(N - 1) + FeiBo(N - 2);
}