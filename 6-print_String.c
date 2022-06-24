#include "holberton.h"
/**
 * print_String - function that prints stings.
 * @va: arguments.
 * Return: lenght of string.
 */
int print_String(va_list va)
{
	char *s;
	int i, cont = 0;

	s = va_arg(va, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 0 && s[i] < 32) || (s[i] >= 127))
		{
			cont += 4;
			_putchar(92);
			_putchar('x');
			hex_print(s[i]);
		}
		else
		{
			_putchar(s[i]);
			cont++;
		}
	}
	return (cont);
}
/**
 * hex_print - function that prints char in hexa
 * @s: char
 * Return: nothing
 */


void hex_print(char s)
{
	char bl[8];
	int i = 0;
	unsigned int r = 0;
	unsigned char bit = 1;

	for (i = 0; i < 8; i++)
	{
		r = ((bit << (7 - i)) & s);
		r = r >> (7 - i);
		bl[i] = r + '0';
	}
	print_arr(bl);
}
/**
 * print_arr - function that store char in binary
 * @bin: arry to store the char
 * Return: nothing
 */

void print_arr(char bin[])
{
	int i = 0;
	int res = 0;
	char h;

	for (; i <= 4; i += 4)
	{
		res = 0;
		res += 8 * (bin[i + 0] - '0');
		res += 4 * (bin[i + 1] - '0');
		res += 2 * (bin[i + 2] - '0');
		res += 1 * (bin[i + 3] - '0');
		if (res == 15)
			h = 'F';
		if (res == 14)
			h = 'E';
		if (res == 13)
			h = 'D';
		if (res == 12)
			h = 'C';
		if (res == 11)
			h = 'B';
		if (res == 10)
			h = 'A';
		if (res < 10)
			h = res + '0';
		_putchar(h);
	}
}
