#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function creates a new dog
 * @name: character input
 * @age: float input
 * @owner: character input
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int num1, num2, num3;
	dog_t *doggy;

	if (name == NULL || owner == NULL)
		return (NULL);

	doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
		return (NULL);

	for (num1 = 0; name[num1] != '\0'; num1++)
		;
	doggy->name = malloc(sizeof(char) * (num1 + 1));

	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	for (num2 = 0; num2 < num1; num2++)
		doggy->name[num2] = name[num2];

	doggy->age = age;

	for (num3 = 0; owner[num3] != '\0'; num3++)
		;

	doggy->owner = malloc(sizeof(char) * (num3 + 1));

	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	for (num2 = 0; num2 < num3; num2++)
		doggy->owner[num2] = owner[num2];
	return (doggy);
}
