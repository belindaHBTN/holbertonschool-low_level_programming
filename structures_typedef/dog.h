#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - information of a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Description: a structure to store the information of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
/*void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);*/

#endif
