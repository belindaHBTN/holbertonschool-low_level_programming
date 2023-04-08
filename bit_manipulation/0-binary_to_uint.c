/**
 * get_len - calculate the length of the string
 * @s: the string
 *
 * Description: calculate the length of the string
 * Return: the length of the string
 */
unsigned int get_len(const char *s)
{
	unsigned int len;

	len = 0;
	while (s[len] != '\0')
	{
		len = len + 1;
	}

	return (len);
}

/**
 * binary_to_unit - convert a binary number to an unsigned int
 * @b: pointer pointing to a string of 0 and 1 chars
 *
 * Description: convert a binary number to an unsigned int
 * Return: the converted number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	int i;
	unsigned int result;
	unsigned int base;

	len = get_len(b);
	i = len - 1;
	result = 0;
	base = 1;

	while (1 >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			result = result + base'
		}
		i = i - 1;
		base = base * 2;
	}
	return (result);
}
