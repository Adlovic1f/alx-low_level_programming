#include <stdio.h>

/**
 * main - the function
 *
 * Description:prints all single digit numbers of base 10 starting from 0
 *
 * Return: to 0 successful
 */
int main(void)
{
	int num = 2;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
