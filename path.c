#include "shell.h"

/**
 *_path - verify the first commant to execute
 *@args: array of entry by the user
 *return: 0 if success
 */

int _path(char **args)
{
	char *global_path = NULL;
	char *global_dup = NULL;
	char *dir_path = NULL;
	char *command_path = NULL;
	char *test[121];
	int exist_stat = -1, i = 0;

	global_path = _getenv("PATH");
	if (global_path == NULL)
		return (-1);
	global_dup = (_strdup(global_path));
	dir_path = strtok(global_dup, ":");
	if (dir_path == NULL)
		return(-1);
	free(global_path);
	while (exist_stat == -1 && dir_path != NULL)
	{
		command_path = extra_command(dir_path, args[0]);
		test[i] = command_path;
		exist_stat = exist(test[i]);
		dir_path = strtok(NULL, ":");
		i++;
	}
	if (i > 0)
		i--;
	free(global_dup);
	if (exist_stat == 0)
	{
		args[0] = test[i];
		return (0);
	}
	else
	{
		if (i >= 0 && test[i] != NULL)
			free(test[i]);
		return (-1);
	}
}
