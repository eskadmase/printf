#include "holberton.h"
/**
 * print_char - function that prints characters.
 * @va: arguments.
 * Return: 1 for character count.
 */
int print_char(va_list va)
{
	int c;

	c = va_arg(va, int);
	_putchar(c);
	return (1);
}

/**
 * print_string - function that prints stings.
 * @va: arguments.
 * Return: lenght of string.
 */
int print_string(va_list va)
{
	char *s;
	char nu[] = "(null)";
	int i, lenght;

	s = va_arg(va, char *);
	if (s == NULL)
	{
		for (i = 0; nu[i] != '\0'; i++)
			_putchar(nu[i]);
		return (6);
	}
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	lenght = _strlen(s);
	return (lenght);
}
