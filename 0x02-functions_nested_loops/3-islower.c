#include "main.h"

/**
 * _islower - print lowercase character
 *
 * Return: to 1 (success) to 0 rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
