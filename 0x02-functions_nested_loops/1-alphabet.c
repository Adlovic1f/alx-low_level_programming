#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase by using ASCII
 *
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
