#include "shell.h"

/**
 *exec - create a chile process, and wait for a comand argument.
 *@arguments: array of imputs
 *Return: 0 if is a success
 */

int exec(char **arguments)
{
	pid_t pid = 0;
	int stat = 0, exe_stat = 0;

	pid  = fork();
	if (pid  == -1)
		perror("Fail\n");
	else if (pid == 0)
	{
		exe_stat = execve(arguments[0], arguments, environ);
		if (exe_stat == -1)
		{
			exe_stat = 126;
			perror("shell");
			exit(exe_stat);
		}
		exit (0);
	}
	else
		wait(&stat);
	exe_stat = WEXITSTATUS(stat);
	return (exe_stat);
}
