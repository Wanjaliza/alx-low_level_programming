#include "main.h"
/**
* _strcmp - compares two strings
* @s1: string 1
* @s2: string 2
* Return: int result on comparison
*/
int _strcmp(char *s1, char *s2)
{
	int num = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		num = *s1 - *s2;
	return (num);
}
