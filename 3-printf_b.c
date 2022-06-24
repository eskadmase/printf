#include "holberton.h"
/**
 * print_binary - print to binary.
 * @va: number tested.
 * Return: 0.
 */
int print_binary(va_list va)
{
	int flag = 0;
	int cont = 0;
	int i = 0;
	int a = 1;
	int b;
	unsigned int prueba = va_arg(va, unsigned int);
	unsigned int p;

	for (; i < 32; i++)
	{
		p = ((a << (31 - i)) & prueba);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			cont++;
		}
	}
	if (!cont)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
