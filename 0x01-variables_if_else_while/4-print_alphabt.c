
#include <stdio.h>

/*
 *  * main -Omit some alphabets
 *   *
 *    *
 *     *Return: Always (Success).
 *
 *      */
int main(void)
{

	    char c;

	        for (c = 'a'; c <= 'z'; c++)
			       if (c != 'c' && c != 'q')
				               putchar(c);



		    putchar('\n');

		        return (0);
}
