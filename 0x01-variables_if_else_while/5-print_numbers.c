#include <stdio.h>

/**
 * main - function
 *
 * Description:prints all single digit numbers of base 10 starting from 0
 *
 * Return: to 0 successful
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%i", num);
		num++;
	}
	printf("\n");
	return (0);
}
