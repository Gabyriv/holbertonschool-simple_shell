#include "shell.h"

/**
 * prompt - gives you the prompt character for simple shell
 */

void prompt(void)
{
	printf("#cisfun$ ");
	fflush(stdout);
}

/**
 * _strcspn - Copy of strcspn function of the string library
 * @s: The string to search
 * @accept: The characters to avoid
 *
 * Return: The length of the initial substring.
 */

size_t _strcspn(const char *s, const char *accept)
{
	size_t i = 0;

	while (s[i] != '\0')
	{
		if (strchr(accept, s[i]) != NULL)
		{
			return (i);
		}
		i++;
	}

	return (i);
}

/**
 * readCommand - function that gets input from the user.
 *
 * Return: The command.
 */

char *readCommand()
{
	char *command = NULL;
	size_t count = 0;
	ssize_t nread;

	nread = getline(&command, &count, stdin);
	command[_strcspn(command, "\n")] = '\0';

	if (nread == -1)
	{
		free(command);
		exit(1);
	}

	return (command);
}
/**
 * strTokens - Function to tokenize a string based on a delimeter.
 * @command: The string to tokenize
 * @delim: The delimeter to use
 *
 * Return: A pointer
 */
char **strTokens(char *command)
{
	char **array;
	char *delim = " \n";
	char *token;
	int i;

	token = strtok(command, delim);
	array = malloc(sizeof(char*) * 1024);
	i = 0;
	while (token != NULL)
	{
		array[i] = strdup(token);
		token = strtok(NULL, delim);
		i++;
	}
	array[i] = NULL;
	return (array);
}

/**
 * executeCommand - Executes a command in a child process.
 * @array: An array of strings containing the command and its arguments.
 *
 * Return: The exist status of the child process, or -1 if an error occurs.
 */

int executeCommand(char **array)
{
	int status;
	pid_t pid = fork();

	if (pid < 0)
	{
		perror("Failed to create.");
		exit(41);
	}

	else if (pid == 0)
	{
		if (execve(array[0], array, NULL) == -1)
		{
			perror("Failed to execute");
			exit(97);
		}
	}
	else
	{
		wait(&status);
	}
	return (0);
}
