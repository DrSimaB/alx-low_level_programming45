#include "main.h"
/**
 * print_alphabet - prints the lowercase alphabet with _putchar.
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha < 123)
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar(10);
}
