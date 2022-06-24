/**
 * array_binary - convert to binary.
 * @prueba: given number.
 * @binary: buffer of binary number.
 * Return: lenght of string.
 */

void array_binary(int prueba, char *binary)
{
	int i = 0;
	int a = 1;
	unsigned int p;
	char b;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & prueba);
		b = p >> (31 - i);
		binary[i] = (b + '0');
	}
}
