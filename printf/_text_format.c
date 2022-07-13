#include "main.h"

/**
 * *text_format - text format
 * @arga: argument a
 * @argb: argument b
 *
 * Return: 0.
 */

int (*text_format(const char *arga, int argb))(va_list)
{
	s_format list[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL},
	};
	int i;

	for (i = 0; list[i].args != NULL; i++)
	{
		if (list[i].args[0] == arga[argb])
		{
			return (list[i].func);
		}
	}
	return (NULL);
}
