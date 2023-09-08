#include <stdio.h>

/**
 * main - function
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: to 0 success
 */
int main(void)
{
	int num = 48;

	while (num <= 102)
	{
		putchar(num);

		if (num == 57)
			num += 39;
		num++;
	}
	putchar('\n');
	return (0);
}
