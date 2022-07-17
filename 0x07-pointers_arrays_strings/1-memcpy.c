#include "main.h"
/**
* _memcpy - copies memory area.
* @dest: destination memory area
* @src: source memory area
* @n: number of bytes
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
		*(dest + num) = *(src + num);
	return (dest);
}
