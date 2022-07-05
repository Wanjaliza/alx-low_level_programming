#include "main.h"
/**
* print_times_table - prints the n times table
* @n : times table to use
* Return: void
*/
void print_times_table(int n)
{
int row, column, mult;

if (n > 15 || n < 0)
	return;
row = 0;
while (row <= n)
{
	for (column = 0; column <= n; column++)
	{mult = row *column;
		if (column == 0)
		{
			_putchar('0' + mult);
		}
		else if (mult < 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + mult);
		}
		else if (mult < 100)
		{
		_putchar(' ');
		_putchar('0' + mult / 10);
		_putchar('0' + mult % 10);
		}
		else
		{
			_putchar('0' + mult / 100);
			_putchar('0' + (mult - 100) / 10);
			_putchar('0' + mult % 10);
		}
		if (column < row)
		{
		_putchar(',');
		_putchar(' ');
		}
	}
	_putchar('\n');
	row++;
}
}
