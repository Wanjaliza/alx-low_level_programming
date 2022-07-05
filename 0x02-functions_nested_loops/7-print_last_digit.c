#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @num: int used for argument function
* Return: 0 or 1
*/
int print_last_digit(int num)
{
int number;
number = num % 10;
if (number < 0)
{
number = number * -1;
}
_putchar(number + '0');
return (number);
}
