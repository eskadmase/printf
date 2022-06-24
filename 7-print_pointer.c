#include "holberton.h"
/**
 * comparehh - take arguments bigger than 10 and change it to char.
 * @res: number given.
 * Return: corresponding character.
 */
char comparehh(int res)
{
	char h = 'a';

	switch (res)
	{
	case 10:
		h = 'a';
		break;
	case 11:
		h = 'b';
		break;
	case 12:
		h = 'c';
		break;
	case 13:
		h = 'd';
		break;
	case 14:
		h = 'e';
		break;
	case 15:
		h = 'f';
		break;
	default:
		h = res + '0';
		break;
	}
	return (h);
}
/**
 * imprimir - print nil when pointer NULL.
 *
 */
void imprimir(void)
{
	_putchar('(');
	_putchar('n');
	_putchar('i');
	_putchar('l');
	_putchar(')');
}
/**
 * print_pointer - pointer address
 * @va: arguments.
 * Return: lenght of string.
 */
int print_pointer(va_list va)
{
	char bin[64];
	unsigned long int punt, t = 1, resp = 0;
	int i = 0, j = 0, p = 0, cont = 0, flag = 0;

	punt = va_arg(va, unsigned long int);
	if (!punt)
	{
		imprimir();
		return (5);
	}
	for (i = 0; i < 64; i++)
	{
		resp = ((t << (63 - i)) & punt);
		resp = resp >> (63 - i);
		bin[i] = (resp + '0');
	}
	for (p = 0; p <= 60 ; p += 4)
	{
		flag = 0;
		for (j = 0; j < 4; j++)
		{
			if (bin[p + j] == '1')
				flag = 1;
		}
		if (flag == 1)
			break;
	}
	_putchar('0');
	_putchar('x');
	for (i = p; i <= 60; i += 4)
	{
		resp  = 0;
		resp += 8 * (bin[i + 0] - '0');
		resp += 4 * (bin[i + 1] - '0');
		resp += 2 * (bin[i + 2] - '0');
		resp += 1 * (bin[i + 3] - '0');
		_putchar(comparehh(resp));
		cont++;
	}
	return (cont + 2);
}
