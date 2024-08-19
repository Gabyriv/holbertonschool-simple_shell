#include "shell.h"

/**
 *main - function for the simple shell
 *@:
 *return: 0 if success and 1 if fails.
 */

int main(void)
{
	ssize_t bytes_read = 0;
	size_t bf_size = 0;
	char *entry = NULL, *av[];
	int counter = 1, vf_stat = 0, exist_stat = 0, exit_stat = 0, builtin_stat = 0;

	while (bytes_read != -1)

