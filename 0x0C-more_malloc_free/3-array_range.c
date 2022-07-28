#include "main.h"
#include <stdlib.h>
/**
* array_range - function that creates an array of integers
* @min: first and minimum value of the array to be created
* @max: last and maximum value of the array to be created
* Return: pointer to the newly created array or NULL
*/
int *array_range(int min, int max)
{
	int *ptr;
	int num;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min) + 1);

	if (ptr == NULL)
		return (NULL);

	for (num = 0; num < ((max - min) + 1); num++)
		ptr[num] = min + num;

	return (ptr);
}
