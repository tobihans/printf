#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a bytes to stdout
 * @c: The char to write
 *
 * Return: the returned value of write
 */
int _putchar(char c)
{
	return ((int) write(1, &c, 1));
}

/**
 * _puts - Writes a string to stdout followed by a new line
 * @str: the string pointer
 *
 * Return: the number of bytes written
 */
int _puts(char *str)
{
	char *iter;
	int count;

	if (str == NULL)
		return (0);

	for (iter = str, count = 0; *iter; iter++, count++)
		_putchar(*iter);

	return (count);
}
