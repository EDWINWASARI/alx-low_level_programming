#include <stdio.h>

/**
 * main - this prints all arguments it receives
 * @argc: The number of command-line arguments
 * @argv: An array containing arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
