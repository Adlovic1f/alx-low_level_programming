#include <stdio.h>

/**
 * main - function
 *
 * Decription: print alphabet in Lowercase and Uppercase
 *
 * Return: to 0 successful
 */
int main(void)
{
	char cha_low = 'a';
	char cha_up = 'A';

	while (cha_low <= 'z')
	{
		putchar(cha_low);
		cha_low++;
	}
	while (cha_up <= 'Z')
	{
		putchar(cha_up);
		cha_up++;
	}
	putchar('\n');
	return (0);
}
