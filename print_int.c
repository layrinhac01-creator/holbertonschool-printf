#include "main.h"

/**
 * print_int - prints an integer
 * @n: integer to print
 *
 * Return: number of characters printed
 */
int print_int(int n)
{
	long num = n;
	int count = 0;
	long div = 1;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	while (num / div >= 10)
		div *= 10;

	while (div > 0)
	{
		_putchar((num / div) % 10 + '0');
		count++;
		div /= 10;
	}

	return (count);
}
