/*
 *  * File: 0-positive_or_negative_c
 *   *
 *    */



#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 *  * main -lowercase alphabets
 *   *
 *    *
 *     *Return: Always (Success).
 *
 *      */
int main(void)
{
		int n;

		    char c;

		    	srand(time(0));
				n = rand() - RAND_MAX / 2;

					for (c = 'a'; c <= 'z'; c++)
						       putchar(c);
					    putchar('\n');
					        
					    	return (0);
}
