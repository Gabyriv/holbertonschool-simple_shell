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

	while (i < 2)
	{
		if (_strcmp(args[0], builtins[i]) == 0)
			break;
		i++;
	}
	if (i == 2)
		return (-1);
	if (_strcmp(builtins[i], "exit") == 0)
	{
		free(args[0]);
		exit(exit_stat);
	}
	if (_strcmp(builtins[i], "env") == 0)
	{
		if (environ == NULL)
			return (0);
		write(1, environ, 1000);
	}
	return (0);
}
