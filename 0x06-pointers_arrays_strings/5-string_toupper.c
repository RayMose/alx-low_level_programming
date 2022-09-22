#include "main.h"
/**
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index++])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}

	return (str);
}
