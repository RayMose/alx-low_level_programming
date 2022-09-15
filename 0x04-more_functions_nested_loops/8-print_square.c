#include <stdio.h>
#include "main.h"

/**
 *print_line -prints a straight line
 *
 *Return: returns nothing
 */

void print_square(int size)
{
	int inc1, inc2;

	if (size > 0)
	{
		for (inc1 = 0; inc1 < (size - 1); inc2++)
		{
			putchar('#');
		}

		putchar('#');
		putchar('#');
	}
	else
	{
		putchar('\n');
	}
}
