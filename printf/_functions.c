#include "main.h"

/**
 * print_char - print  a char.
 * @list_argument: list
 *
 * Return: 1.
 */

int print_char(va_list list_argument)
{
	_putchar(va_arg(list_argument, int));

	return (1);
}

/**
 * print_string - print a string.
 * @list_argument: list
 *
 * Return: i
 */

int print_string(va_list list_argument)
{
	char *str;
	int i;

	str = va_arg(list_argument, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

/**
 * count_characters - counter
 * @n: argument
 *
 * Return: 0
 */

int count_characters(unsigned int n)
{
	int count = 0;

	unsigned int x, z;

	if (n != 0)
	{
		z = (n / 10);
		x = (n % 10);

		count += count_characters(z);
		count++;
		_putchar(x + '0');
		return (count);
	}
	return (0);
}
/**
 * print_integer - print an integer.
 * @list_argument: list
 *
 * Return: b + 1
 */

int print_integer(va_list list_argument)
{
	int a, b = 0;
	unsigned int x;

	a = va_arg(list_argument, int);

	if (a < 0)
	{
		_putchar('-');
		b = 1;
		x = a * (-1);
	}
	else
	{
		x = a;
	}

	if (x > 9)
	{
		return (b + count_characters(x));
	}
	_putchar(x + '0');
	return (1 + b);
}
