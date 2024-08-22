#include "shell.h"

/**
 *_args - fill the array with imput by he user
 *@entry:string with imput
 *@av:array to be fill
 *Return: the lenght of the array
 */

int _args(char *entry, char *av[])
{
	int index = 0;
	char *options, *help = entry, *command;

	command = strtok(entry, "\n\t\r ");
	av[i] = command;
	while (help != NULL)
	{
		index++;
		options = strtok(NULL, "\n\t\r ");
		av[i] = options;
		}
	av[i] = NULL;
	return (i);
}
