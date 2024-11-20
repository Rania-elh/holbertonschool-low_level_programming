#include "calc.h"

/**
 *op_add - the sum
 *op_sub - the difference                                                                                                                                                                                         *op_mul - the product                                                                                                                                                                                            *op_div - the result of the division                                                                                                                                                                             *op_mod - the remainder of the division
 *@a: number
 *@b: number
 *Return: Always 0 (Success)                                                                                                                                                                                      */                                                                                                                                                                                                                                                                                                                                                                                                                               int op_add(int a, int b)
{
        return(a + b);
}
                                                                                                                                                                                                                 int op_sub(int a, int b)
{
        return(a - b);
}                                                                                                                                                                                                                                                                                                                                                                                                                                 int op_mul(int a, int b)
{
        return(a * b);
}                                                                                                                                                                                                                                                                                                                                                                                                                                 int op_div(int a, int b)
{
	if (b == 0)
	{
		return(0);
	}
        return(a / b);
}
                                                                                                                                                                                                                 int op_mod(int a, int b)
{
	if (b == 0)
	{
		return(0);
	}
	return(a % b);
}
