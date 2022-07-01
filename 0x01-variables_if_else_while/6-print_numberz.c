#include <stdio.h>
/**
* main - Entry point
* Description - output one to ten
* Return: 0 if success
*/
int main(void)
{
int c = 0;
while (c <= 9)
{
putchar(48 + c);
c++;
}
putchar('\n');
return (0);
}
