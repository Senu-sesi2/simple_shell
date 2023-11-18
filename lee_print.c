#include "shell.h"

/**
 * main - print to the standart output
 * Return: Always 0
 */

void lee_print(const char *asempa)
{
	write(STDOUT_FILENO, asempa, strlen(asempa));
}
