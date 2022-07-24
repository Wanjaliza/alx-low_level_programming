#include <stdio.h>
/**
* main - entry point
* @argc: number of command line arguments
* @argv: array containing program line arguments
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
