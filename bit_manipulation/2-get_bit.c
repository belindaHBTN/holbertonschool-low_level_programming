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
