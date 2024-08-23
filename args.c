#include "shell.h"

/**
 *_args - fill the array with imput by he user
 *@entry:string with imput
 *@av:array to be fill
 *Return: the lenght of the array
 */

int get_args(char *entry, char **arguments)
{
	int index = 0;
	char *options, *help = entry, *command;

	command = strtok(entry, "\n\t\r ");
	arguments[index] = command;
	while (help != NULL)
	{
		++index;
		options = strtok(NULL, "\n\t\r ");
		help = options;
		arguments[index] = options;
	}
	arguments[index] = NULL;
	return (index);
}
