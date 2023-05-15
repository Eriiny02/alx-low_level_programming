#include <stdio.h>

/**
 * main -  prints the number of arguments passed into it
 * @argc: int
 * @argv: pointer to an array
 * Return: 0
 */

int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
