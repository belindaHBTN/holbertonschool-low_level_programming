#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - duplicate the string in the new memory
 * @str: the string that need to be duplicated
 *
 * Description: duplicate the string in the new memory
 * Return: a pointer to a new string, or NULL if it fails
 */
char *_strdup(char *str)
{
	int len;
	char *p;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (*(str + len) != '\0')
	{
		len = len + 1;
	}

	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		p[i] = str[i];
		i = i + 1;
	}
	p[i] = '\0';
	return (p);
}

/**
 * new_dog - create a new dog structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner's name
 *
 * Description: create a new dog structure
 * Return: dog structure, otherwise NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	char *namecopy;
	char *ownercopy;

	p = malloc(sizeof(*p));

	if (p == NULL)
	{
		return (NULL);
	}

	namecopy = _strdup(name);
	if (namecopy == NULL && name != NULL)
	{
		free(namecopy);
		free(p);
		return (NULL);
	}

	ownercopy = _strdup(owner);
	if (ownercopy == NULL && owner != NULL)
	{
		free(ownercopy);
		free(namecopy);
		free(p);
		return (NULL);
	}

	p->name = namecopy;
	p->age = age;
	p->owner = ownercopy;

	return (p);
}
