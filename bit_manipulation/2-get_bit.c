/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: the index of the bit
 *
 * Description: returns the value of a bit at a given index
 * Return: value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	result = n & (1 << index);
	if (result == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
