#include "holberton.h"
/**
 * print_string_rot - print a sting rot13'ed.
 * @va: arguments.
 * Return: lenght of string.
 */
int print_string_rot(va_list va)
{
	char *s;
	char nu[] = "(null)";
	int i, lenght;

	s = rot13(_strdup(va_arg(va, char *)));

	if (s == NULL)
	{
		for (i = 0; nu[i] != '\0'; i++)
			_putchar(nu[i]);
		return (6);
	}
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	lenght = _strlen(s);
	free(s);
	return (lenght);
}


/**
 * _strdup - create new space in memory that contains cpy of a given string
 * @str: given string.
 * Return: Pointer to allocated memory.
 */
char *_strdup(char *str)
{
	char *cpy_ar;
	unsigned int i, cp;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	cpy_ar = malloc((i + 1) * sizeof(char));
	if (cpy_ar == NULL)
		return (NULL);

	for (cp = 0; cp <= i; cp++)
	{
		cpy_ar[cp] = str[cp];
	}

	return (cpy_ar);
}

/**
 * rot13 - encode the string to leet.
 * @s: given string.
 * Return: the string encoded.
 */
char *rot13(char *s)
{
	int iter, i;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (s == NULL)
		return (NULL);

	for (iter = 0; s[iter] != '\0'; iter++)
	{
		for (i = 0; i < 52; i++)
		{
			if (s[iter] == a[i])
			{
				s[iter] = n[i];
				break;
			}
		}
	}
	return (s);
}
