#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of array
 * @a: array
 * @n: number of elements
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		printf("%d", a[s]);
		if (s != n - 1)
		{
			printf(", ");
		}
		putchar("\n");
	}
}
