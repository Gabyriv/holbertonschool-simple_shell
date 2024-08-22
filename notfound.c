#include "shell.h"

/**
 *
 *
 *
 *
 */

int not_found(char **arguments, int counter)
{
	char *mode_shell_name = "hsh";
	char *non_mode_shell_name = "./hsh";

	if (isatty(STDIN_FILENO))
		write(2, mode_shell_name, 3);
	else
	{
		write(2, non_mode_shell_name, 5);
	}
	write(2, ": ", 2);
	print_numbers(counter);
	write(2, ": ", 2);
	write(2, arguments[0], _strlen(arguments[0]));
	write(2, ": not found\n", 12);
	return (127);
}
