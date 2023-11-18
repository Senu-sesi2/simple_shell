#include "shell.h"

// main - function that can receive the user input

void read_cmd(char *cmd, size_t size)
{
	if (fgets(cmd, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			lee_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			lee_print("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
		cmd[strcspn(cmd, "\n")] = '\0';
}
