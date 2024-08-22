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
	char *test[1024];
	int exist_stat = -1, 1 = 0;

	global_path = _getenv("PATH");
	if (global_path == NULL0
			return (-1);
			global_dup = (_stardup(global_path));
			dir_path = strtok(global_dup, ":");
			if (dir_path == NULL)
			return(-1);
			free(global_path);
			while (exist_stat == -1 && dir_path != NULL)
			{
			command_path = append_command(dir_path, av[0]);
			test[i] = command_path;
			exist_stat = exist(test[i]);
			dir_path = strtok(NULL, ":");
			i++;
			}
			i--;
			free(global_dup);
			free_grid(test ,i);
			if (exist_stat == 0)
			{
			av[0] = test[i];
			return (0);
			}
			ele
			{
				free(test[i]);
				return (-1);
			}
}
