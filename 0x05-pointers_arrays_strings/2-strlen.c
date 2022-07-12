#include "main.h"
/**
* _strlen - returns the length of a string.
* @s: string location pointer
* Return: length of a string
*/
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count = count + 1;
	return (count);
}
