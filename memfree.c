#include "shell.h"

/**
 *free - free the memeory when the last execution happened
 *@entry: the input type by the user
 *
 */

void free(char *entry)
{
	if (isatty(STDIN_FILENO))
	{
		_putchar('\n');
		free(entry);
	}
	if (!isatty(STDIN_FILENO))
		free(entry);
}

