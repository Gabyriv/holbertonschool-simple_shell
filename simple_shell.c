#include "shell.h"

/**
 *main - function for the simple shell
 *return: 0 if success and 1 if fails.
 */

int main(void)
{
	ssize_t bytes_read = 0;
	size_t bf_size = 0;
	char *entry = NULL, *arguments[20];
	int counter = 1, vf_stat = 0, exist_stat = 0, exit_stat = 0, builtin_stat = 0;

	_prompt("HELLO USER$:", 12);
	bytes_read = getline(&entry, &bf_size, stdin);
	while (bytes_read != -1)
	{
		if (*entry != '\n')
		{
			get_args(entry, arguments);
			if (arguments[0] != NULL)
			{
				exist_stat = exist(arguments[0]);
				if (exist_stat == 0)
				{
					vf_stat = _path(arguments);
					if (vf_stat == 0)
					exit_stat = exec(arguments);
					else
					{
						builtin_stat = check_built(arguments, exit_stat);
						if (builtin_stat != 0)
						exit_stat = not_found(arguments, counter);
					}
					
				}
				else
					exit_stat = exec(arguments);
			}
		}
		else
		{
			free(entry);
		}
		entry = NULL;
		memset(arguments, 0, sizeof(arguments));
		counter++;
		_prompt("HELLO USER$:", 12), bytes_read = getline(&entry, &bf_size, stdin);
	}
	mem_free(entry);
	return (exit_stat);
}
