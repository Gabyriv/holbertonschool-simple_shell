#include "shell.h"

/**
 *_free - free the memeory when the last execution happened
 *@entry: the input type by the user
 *
 */

void mem_free(char *entry)
{
	if (entry != NULL)
	{
		if (isatty(STDIN_FILENO))
		{
			_putchar('\n');
		}
		free(entry);
	}
}


/**
 *free_grid - Free the allocated memory used in the last excercise
 *@grid: pointer to grid
 *@heigth: Heigth of the grid
 */

void free_grid(char **grid, int heigth)
{
	int i = 0;

	if (grid == NULL)
	{
		return;
	}

	while (i < heigth)
	{
		free(grid[i]);
		i++;
	}
}
