#include "shell.h"

/**
 *_strlen - size the len of the string
 *@str: string to be seze
 *return: the len of the string
 */

int _strlen(const char *str)
{
	int len = 0;

	if (str == NULL)
		return (0);

	while (str[len] != '\0')
		len++;
	return (len);
}
