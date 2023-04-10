#include <stdlib.h>
#include <stdio.h>
/**
 * main - print two argument multiplications.
 * @argc: size of arguments.
 * @argv: argument vector
 *
 * Return: 1 if the value are less of 2 arguments other wise print 0.
 */
int main(int argc, char **argv)
{
	int multiplication;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		multiplication = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%i\n", multiplication);
	}
	return (0);
}
