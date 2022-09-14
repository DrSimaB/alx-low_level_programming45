#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet x10 with _putchar.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alpha = 'a';

	int ten = 0;

	while (ten < 10)
	{
		while (alpha < 123)
		{
			_putchar(alpha);
			alpha++;
		}
		alpha = 'a';
		_putchar(10);
		ten++;
	}
}

