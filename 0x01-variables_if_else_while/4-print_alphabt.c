#include <stdio.h>

/**
* main -Omit some alphabets
*
*Return: Always (Success).
*
*/
int main(void)
{

	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	putchar('\n');

	return (0);
}
