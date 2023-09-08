#include <stdio.h>

/**
 * main - function
 *
 * Description: prints the lowercase alphabet in reverse
 *
 * Return: to 0 successful
 */
int main(void)
{
	char cha_low = 'z';

	while (cha_low >= 'a')
	{
		putchar(cha_low);
		cha_low--;
	}
	putchar('\n');
	return (0);
}
