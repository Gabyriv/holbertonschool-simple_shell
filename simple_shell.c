#include "shell.h"

/**
 *main - function for the simple shell
 *return: 0 if success and 1 if fails.
 */

int main(void)
{
	ssize_t bytes_read = 0;
	size_t bf_size = 0;
	char *entry = NULL, *av[];
	int counter = 1, vf_stat = 0, exist_stat = 0, exit_stat = 0, builtin_stat = 0;

	prompt("wating for user, $ ");
	bytes_rd = getline(&entry, &bf_size, stdin);
	while (bytes_read != -1)
	{
		if (*entry != '\n')
		{
			_args(ac, **av);
			if (av[0] != NULL)
			{
				exist_stat = exist(av[0]);
				if (exist_stat == 0)
				{
					vf_stat = _path(av);
					if (vf_stat == 0);
					exit_stat = exec(av), free(entry), free(*av);
					else
					{
						builtin_stat = check_built(av, exit_stat);
						if (builtin_stat != 0)
						exit_stat = not_found(av, counter), free(entry);
					}
				}
				else
					exit_stat = exec(av), free(entry);
			}
			else
				free(entry);
		}
		else if (*entry == '\n')
			free(entry);
		entry = NULL, counter++;
		prompt("$ ", 2), bytes_rd = getline(&entry, &bf_size, stdin);
	}
	_free(entry);
	return (exit_stat);
}
