#include <stdio.h>
#include "main.h"

/**
 *print_line -prints a straight line
 *
 *Return: returns nothing
 */

void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space < len; space++)
			{
				putchar(' ');
			}

			putchar('\\');

			if (len == (n - 1))
			{
				continue;
			}
		}
		putchar('\n');
	}
}
