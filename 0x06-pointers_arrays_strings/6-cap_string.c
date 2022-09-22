#include "main.h"
/**
 * string_toupper -  Changes all lowercase letters
 * @str: The string to be changed.
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[++index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;
		if (str[index - 1] == ' ' ||
				str[index - 1 == '\t'] ||
				str[index - 1 == '\n'] ||
				str[index - 1 == ','] ||
				str[index - 1 == ';'] ||
				str[index - 1 == '.'] ||
				str[index - 1 == '!'] ||
				str[index - 1 == '?'] ||
				str[index - 1 == '"'] ||
				str[index - 1 == '('] ||
				str[index - 1 == ')'] ||
				str[index - 1 == '{'] ||
				str[index - 1 == '}'] ||)
			str[index] -= 32;
	}

	return (str);
}
