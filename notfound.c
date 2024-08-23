#include "shell.h"

/**
 *not_found - puts an error message when command is not found
 *@args: array of args typed by the user
 *@counter: count the time the shell was use
 *Return: Exit status
 */

int not_found(char **args, int counter)
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
	write(2, args[0], _strlen(args[0]));
	write(2, ": not found\n", 12);
	return (127);
}



/**
 * print_numbers - Prints numbers, used to print the error message
 * @n: number to print
 * Return: Number
 */

int print_numbers(int n)
{
	unsigned int number;
	int i = 0;

	if (n < 0)
	{
		number = -n;
		i = i + _putchar('-');
	}
	else
	{
		number = n;
	}
	if (number / 10 != '\0')
		i = i + print_numbers(number / 10);
	i = i + _putchar(number % 10 + '0');
	return (i);
}
