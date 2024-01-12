#include "simple_shell.h"
#include <stdio.h>
/**
 * main - program main entry point
 * @argc: args num passed
 * @argv: arr args passed
 * Return: 0 to be return incase true
 */
int main(int argc, char **argv)
{
int a = 0;

while (a < argc)
{
printf("handles argument %d: %s\n", a, argv[a]);
a++;
}
return (0);
}
