#include "shell.h"

/**
 * main - simple shell
 * @dis: display the prompt
 * @read: read the sway
 * @exe: execute the sway
 */

int main (void)
{
	char sway[100];

	while(true)
	{
		display_prompt();
	}
}
