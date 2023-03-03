#include "main.h"

/**
 * _strspn: get the length of a prefix substring.
 * @s: string
 * @accept: prefix substring.
 *
 * Description: get the length of a prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
    int i = 0;
    unsigned int count = 0;
    
    while (*(s + i) != '\0')
    {
        if ((*(s + i) >= 'a' && *(s + i) <= 'z') || (*(s + i) >= 'A' && *(s + i) <= 'Z'))
        {
            int j = 0;
            while (*(accept + j) != '\0')
            {
                if (*(s + i) == *(accept + j))
                {
                    count = count + 1;
                }
                j = j + 1;
            }
            i = i + 1;
        }
        else {
            break;
        }
    }
    return (count);
}
