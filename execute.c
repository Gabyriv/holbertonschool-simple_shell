#include "shell.h"

/**
 * execute_command - Executes a command by forking a child process
 * @args: Array of arguments
 * @path: Path to the executable
 */
void execute_command(char **args, char *path)
{
	pid_t child_pid;
	int status;

	child_pid = fork();
	if (child_pid == -1)
	{
		fprintf(stderr, "%s\n", args[0]);
		free(args);
		exit(41);
	}

	else if (child_pid == 0)
	{
		if (execve(path, args, NULL) == -1)
		{
			if (isatty(STDIN_FILENO))
			{
				perror(args[0]);
				free(args);
				exit(97);
			}

			else
			{
				exit(EXIT_FAILURE);
			}
		}
	}
	else
	{
		wait(&status);
	}
}
