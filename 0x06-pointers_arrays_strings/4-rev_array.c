#include "main.h"
/**
* reverse_array - reverses the content of an array of integers
* @a: an array of integers
* @n: the number of elements to swap
* Return: void
*/
void reverse_array(int *a, int n)
{
	int num1, num2;

	num1 = 0;
	while (num1 < n)
	{
		n--;
		num2 = a[num1];
		a[num1] = a[n];
		a[n] = num2;
		num1++;
	}

}
