#pragma once
typedef char ElementType;
struct StackRecord
{
	int Capacity;
	int TopOfStack;
	ElementType *Array;
};