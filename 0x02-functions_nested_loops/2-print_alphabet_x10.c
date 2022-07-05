#include "main.h"
/**
* print_alphabet_x10 - Entry point
*
* Description - print_alphabet_x10
* Return: void
*/
void print_alphabet_x10(void)
{
char c;
int x;
for (x = 0; x <= 9; x++)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}}
