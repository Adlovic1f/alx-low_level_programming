#include <stdio.h>

/**
 * main - function
 *
 * Decription: Print all the letters except q and e
 *
 * Return: to 0 successful
 */
int main(void)
{
	char cha_low = 'a';

	while (cha_low <= 'z')
	{
		if (cha_low == 'e' || cha_low == 'q')
			cha_low++;
		putchar(cha_low);
		cha_low++;
	}
	putchar('\n');
	return (0);
}
