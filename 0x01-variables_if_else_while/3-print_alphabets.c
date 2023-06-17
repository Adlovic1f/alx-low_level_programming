#include <stdio.h>

/**
  * main - function
  *
  * Return: returns 0 to indicate successful execution
  */
int main(void)
{
	int num_low = 97;
	int num_up = 65;

	while (num_low <= 122)
	{
		putchar(num_low);
		num_low++;
	}
	while (num_up <= 90)
	{
		putchar(num_up);
		num_up++;
	}
	putchar('\n');
	return (0);
}
