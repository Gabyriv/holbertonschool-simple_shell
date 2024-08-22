#include "shell.h"

/**
 * _prompt - Prints the prompt in the standar input
 * @prompt: Pointer to the string to be printed
 * @size: Length ot the prompt
 * Return: 0 if success or -1 if fails
 */
int _prompt(const char *prompt, unsigned int size)
{
	int nread;

	if (isatty(STDIN_FILENO))
	{
		nread = write(1, prompt, size);
		if (nread == -1)
			return (-1);
	}
		return (0);
}
