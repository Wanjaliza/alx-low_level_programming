#include "main.h"
/**
* rev_string - reverses a string.
* @s: string to reverse
* Return: void
*/
void rev_string(char *s)
{
	int count = 0, x, y;
	char *string, z;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	string = s;

	for (x = 0; x < (count - 1); x++)
	{
		for (y = x + 1; y > 0; y--)
		{
			z = *(string + y);
			*(string + y) = *(string + (y - 1));
			*(string + (y - 1)) = z;
		}
	}
}
