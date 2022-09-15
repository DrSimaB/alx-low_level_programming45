#include "main.h"
/**
 * main - check if the character is an upp/low case
 *
 * Return : 0 or 1
 */
int _isupper(int c)
{
	if (c >= 64 && c <= 91)
	{
		return (1);
	}
	return (0);
}
