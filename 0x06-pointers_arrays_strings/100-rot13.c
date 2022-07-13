#include "main.h"
/**
* rot13 - encodes a string using rot13
* @string: string to encode
* Return: encoded character
*/
char *rot13(char *string)
{
	int count = 0, num;
	char alphbt[] = "abcdefghijklmnopqrstuvwxyxABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(string + count) != '\0')
	{
		for (num = 0; num < 52; num++)
		{
			if (*(string + count) == alphbt[num])
			{
				(*(string + count) = rot13[num]);
				break;
			}
		}
		count++;
	}
	return (string);
}
