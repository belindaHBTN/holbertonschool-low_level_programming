#include "main.h"

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
	int len1;
	int len2;
	int len;
	int count;
	int i;
	int val1;
	int val2;

	len1 = get_len(n);
	len2 = get_len(m);
	if (len1 > len2)
	{
		len = len1;
	}
	else
	{
		len = len2;
	}

	count = 0;
	i = 0;
	while (i < len)
	{
		val1 = get_bit(n, i);
		val2 = get_bit(m, i);
		if (val1 != val2)
		{
			count = count + 1;
		}
		i = i + 1;
	}

	return (count);
}
