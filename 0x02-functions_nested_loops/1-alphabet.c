#include "main.h"
/**
* print_alphabet - entry point
* Description - a to z
* Return: 0 success
*/
void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c = c + 1;
}
_putchar('\n');
}
