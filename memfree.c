#include "shell.h"

/**
 *_free - free the memeory when the last execution happened
 *@entry: the input type by the user
 *
 */

void mem_free(char *entry)
{
	if (isatty(STDIN_FILENO))
	{
		_putchar('\n');
		free(entry);
	}
	if (!isatty(STDIN_FILENO))
		free(entry);
}

