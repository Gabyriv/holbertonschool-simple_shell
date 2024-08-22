#include "shell.h"

/**
 *extra_command - tape the input with the PATH
 *@dir_path: directory to append with commmand
 *@command:command to be tape with dir
 *return: buffer
 */

char *extra_command(char *dir_path, char *command)
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
	for (x = 0; dir_path[x] != '\0'; x++)
	{
		command_path[x] = dir_path[x];
	}
	if (dir_path[x - 1] != '/')
	{
		command_path[x] = '/';
		x++;
	}
	while (command[y] != '\0')
	{
		command_path[x +y] = command[y];
		y++;
	}
	command_path[x + y] = '\0';
	return (command_path);
}
