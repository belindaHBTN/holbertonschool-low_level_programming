/**
 * get_len - calculate the length of the binary number
 * @n: number
 *
 * Description: calculate the length of the binary number
 * Return: the length of the binary number
 */
int get_len(unsigned long int n)
{
	int len;

	len = 0;
	while (n > 0)
	{
		n = n >> 1;
		len = len + 1;
	}

	return (len);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int
 *
 * Description: prints the binary representation of a number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int len;
	int i;

	len = get_len(n);

	i = len - 1;
	while (i >= 0)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		i = i - 1;
	}
}
