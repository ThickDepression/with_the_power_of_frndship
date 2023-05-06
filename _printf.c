#include "main.h"

/**
 *_printf - print function
 *@format: list of argument types
 *Return: 0 for success
 */

int _printf(const char * const format, ...)
{
	int i, j;
	int counter = 0;

	va_list args;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);
	for (i = 0; format[i] != '\0';i++)
	{
		if (format[i + 1] == ' ')
		{
			for (j = 0; *(format + j + i + 1) == ' '; j++)
			{

			}
			if (format[j + i + 1] == '\0')
				return (-1);
		}
		if (format[i] == '%' && format[i + 1] == 'l' )
		{
			i += 2;
			counter = my_switch(args, format[i], counter);
		}
		else if (format[i] == '%')
		{
			counter = my_switch(args, format[i + 1], counter);
			i++;
		}
		else
		{
			my_putchar(format[i]);
			counter++;
		}
	}
	va_end(args);
	return (counter);
}