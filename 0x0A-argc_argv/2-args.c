#include <stdio.h>
/**
* main - entry point
* @argc: number of arguments passed
* @argv: one dimensional array of strings passed
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}
