#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: The number of command-line arguments
 * @argv: An array that contains arguments
 * Return: 0  or 1 to indicate an error
 */
int main(int argc, char *argv[])
{
int a, b, outcome;
if (argc != 3)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
outcome = a *b;
printf("%d\n", outcome);
return (0);
}
