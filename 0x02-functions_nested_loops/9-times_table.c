#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0
* Return: void
*/
void times_table(void)
{
int column, row, mult;
row = 0;
while (row <= 9)
{
	column = 0;
	while (column <= 9)
	{
		mult = row *column;
		if (column == 0)
		{
		_putchar('0' + mult);
		}
		else if (mult < 10)
		{
		_putchar(' ');
		_putchar('0' + mult);
		}
		else
		{
		_putchar('0' + mult / 10);
		_putchar('0' + mult % 10);
		}
		if (column < 9)
		{
		_putchar(',');
		_putchar(' ');
		}
		column++;
	}
	_putchar('\n');
	row++;
}

}
