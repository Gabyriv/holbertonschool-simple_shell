#include "shell.h"

/**
 *
 *
 *
 *
 */

int exist(char *pathname)
{
	int exist_stat;

	exitst_stat = (open(pathname, O_RDONLY));
	if (exist_stat != -1)
	{
		close(exist_stat);
		return (0);
	}
	else
		return (-1);
}
