#include "main.h"
#include <stdio.h>
/**
* print_array - prints n elements of an array of integers
* @a: int pointer
* @n: int no
* Return: 0
*/
void print_array(int *a, int n)
{
	int num = 0;

	for (; num < n; num++)
	{
		printf("%d", *(a + num));
		if (num != (n - 1))
			printf(", ");
	}
	printf("\n");
}
