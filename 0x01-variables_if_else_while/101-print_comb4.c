#include <stdio.h>
/**
* main - Entry point
* Description - combination of 3 numbers
* Return: 0 success
*/
int main(void)
{
int a;
int b;
int c = 0;
while (c < 10)
{
b = 0;
while (b < 10)
{
a = 0;
while (a < 10)
{
if (a != b && b != c && c < b && b < a)
{
putchar(48 + c);
putchar(48 + b);
putchar(48 + a);
if (a + b + c != 9 + 8 + 7)
{
putchar(',');
putchar(' ');
}
}
a++;
}
b++;
}
c++;
}
putchar('\n');
return (0);
}
