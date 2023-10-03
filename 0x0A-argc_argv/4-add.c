#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers
 * @argc: The number of command-line arguments
 * @argv: An array containing the  arguments
 * Return: (0) or 1 for an error
 */
int main(int argc, char *argv[])
{
int i, num;
int total = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
int b = 0;
while (argv[i][b])
{
if (!isdigit(argv[i][b]))
{
printf("Error\n");
return (1);
}
b++;
}
num = atoi(argv[i]);
if (num > 0)
{
total += num;
}
}
printf("%d\n", total);
return (0);
}
