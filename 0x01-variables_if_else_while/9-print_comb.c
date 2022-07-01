#include <stdio.h>
/**
* main - Entry point
* Description - numbers
* Return: 0 on success
*/
int main(void)
{
int c = 0;
while (c < 10)
{
putchar(48 + c);
if (c != 9)
{
putchar(',');
putchar(' ');
}
c++;
}
putchar('\n');
return (0);
}
