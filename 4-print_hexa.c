#include "holberton.h"
/**
 * compareh - take arguments bigger than 10 and change it to char.
 * @res: number given.
 * Return: corresponding character.
 */
char compareh(int res)
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
 * print_hexa - print in hexadecimal.
 * @va: arguments.
 * Return: lenght of string.
 */
int print_hexa(va_list va)
{
	int prueba;
	char binary[32];
	int i = 0, flag = 0, p = 0, j = 0, res = 0, cont = 0;
	char h = '0';

	prueba = va_arg(va, int);
	if (prueba == 0)
	{
		_putchar('0');
		return (1);
	}
	array_binary(prueba, binary);
	for (p = 0; p <= 28 ; p += 4)
	{
		flag = 0;
		for (j = 0; j < 4; j++)
		{
			if (binary[p + j] == '1')
				flag = 1;
		}
		if (flag == 1)
			break;
	}
	for (i = p; i <= 28; i += 4)
	{
		res  = 0;
		res += 8 * (binary[i + 0] - '0');
		res += 4 * (binary[i + 1] - '0');
		res += 2 * (binary[i + 2] - '0');
		res += 1 * (binary[i + 3] - '0');
		h = compareh(res);
		_putchar(h);
		cont++;
	}
	return (cont);
}
