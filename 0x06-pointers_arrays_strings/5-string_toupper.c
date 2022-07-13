#include "main.h"
/**
* string_toupper - changes all lowercase letters of a string to uppercase
* @string: string
* Return: pointer to string
*/
char *string_toupper(char *string)
{
	int num = 0;

	while (*(string + num) != '\0')
	{
		if ((*(string + num) >= 97) && (*(string + num) <= 122))
			*(string + num) = *(string + num) - 32;
		num++;
	}
	return (string);
}
