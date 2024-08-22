#include "shell.h"

/**
 *extra_command - tape the input with the PATH
 *@dir_path: directory to append with commmand
 *@command:command to be tape with dir
 *return: buffer
 */

char extra_command(char *dir_path, char *command)
{
	int x, y = 0, len1, len2;
	char *command_path = NULL;

	if (dir_path == NULL || command == NULL)
		return (NULL);

	len1 = _strlen(dir_path);
	len2 = _strlen(command);
	command_path = malloc(len1 + len2 + 2);
	if (command_path == NULL)
		return (NULL);
	for (a = 0; dir_path[a] != NULL; a++)
	{
		command_path[a] = dir_path[a];
	}
	if (dir_path[a - 1] != '/')
	{
		command_path[a] = '/';
		a++;
	}
	while (command[b] != NULL)
	{
		command_path[a +b] = command[b];
	}
	command_path[a + b] = NULL;
	return (command_path);
}
