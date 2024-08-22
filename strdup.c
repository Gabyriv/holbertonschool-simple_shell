#include "shell.h"

/**
 *_stardup - duplicate a string
 *@str: string to be dup
 *return: the pointe of the dup string
 */

cahr *_stardup(char *str)
{
	unsigned int a, len;
	char *dup;

	if (str == NULL)
		return (NULL);
	
	for (len = 0; str[len] != NULL; len++)
		;
	dup = (char *) malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
