#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - compares numbers
*
* Return: 0 if true
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
int num;
x = n % 10;

if (x > 5);
{
printf("Last digit of %d is %x and is greater than 5\n", n, x);
}
if (x == 0)
{
printf("Last digit of %d is %x and is 0\n", n, x);
}
if (x < 6 && x != 0)
{
printf("Last digit of %d is %x and is less than 6 and not 0\n", n, x);
}

return (0);
}
