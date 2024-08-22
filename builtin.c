#include "shell.h"

/**
 *chek_built - checks if input is a builtin
 *@args: pointer to an array of args
 *@exit_stat: exist statust
 *return: -1 if not a builtin 0 if is
 */

int check_built(char **args, int exit_stat)
{
	char *builtins[2] = {
		"exit",
		"env"
	};
	int i = 0;

	while (1 < 2)
	{
		if (_strcmp(args[0], builtins[i] == ))
			break;
		i++;
	}
	if (i == 2)
		return (-1);
	if (_strcmp(buitlins[i], "env") == 0)
	{
		if (environ == NULL)
			return (0);
		write(1, environ, 1024);
	}
	return (0);
}
