#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - A simple reimplementation of the standard printf function
 * @format: The format string
 * @...: A liast of arguments used to replcade identifiers in the string
 *
 * Return: the number of bytes written
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int count = 0;
	char *iter = (char *) format;

	va_start(ap, format);
	while (*iter)
	{
		if (*iter == '%')
		{
			iter++;

			switch (*iter)
			{
			case 'c':
				_putchar(va_arg(ap, int));
				count++;
				break;
			case 's':
				count += _puts(va_arg(ap, char *));
				break;
			case '%':
				_putchar('%');
				break;
			default:
				_putchar('%');
				_putchar(*iter);
				count++;
			}
			iter++;
		}
		_putchar(*iter);
		count++;
		iter++;
	}
	va_end(ap);

	return (count);
}

