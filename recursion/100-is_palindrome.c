/**
 * get_length - calculate the length of the string.
 * @s: input string.
 *
 * Description: calculate the length of the string.
 * Return: an integer
 */

int get_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
	return (1 + get_length(s + 1));
	}
}

/**
 * compare - check if the string is a palindrome
 * @s: input string
 * @length: integer, the length of the string
 * @position: integer
 *
 * Description: check if the string is a palindrome.
 * Return: 1 is a linadrome, otherwise return 0.
 */

int compare(char *s, int length, int position)
{
	if (position >= length - 1)
	{
		return (1);
	}
	if (s[position] == s[length - 1 - position])
	{
		return (compare(s, length, position + 1));
	}
	return (0);
}

/**
 * is_palindrome - check if the string is a palindrome
 * @s: inpiut string
 *
 * Description: check if the string is a palindrome.
 * Return: 1 is a linadrome, otherwise return 0.
 */

int is_palindrome(char *s)
{
	int length = get_length(s);

	return (compare(s, length, 0));
}
