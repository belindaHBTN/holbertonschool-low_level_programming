/**
 * flip_bits - calculate the number of bits need to be fliped
 * @n: unsigned long int
 * @m: unsigned long int
 *
 * Description: calculate the number of bits need to be fliped
 * Return: the number of bits need to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	int count;

	result = n ^ m;
	count = 0;
	while (result > 0)
	{
		if ((result & 1) == 1)
		{
			count = count + 1;
		}
		result = result >> 1;
	}

	return (count);
}
