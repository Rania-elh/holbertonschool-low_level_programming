#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers
 *@a: pointer
 *@size: the size of the rows and columns of the square matrix
 *Return:  the sum of the two diagonals of a square matrix of integers
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
	sum1 += a[i * (size + 1)];
	}
	for (i = 0; i < size; i++)
	{
	sum2 += a[(i + 1) * (size - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
