#include "shell.h"

/**
 *_stardup - duplicate a string
 *@str: string to be dup
 *return: the pointe of the dup string
 */

char *_strdup(char *str)
{
	unsigned int a, len;
	char *dup;

	if (str == NULL)
		return (NULL);
	
	for (len = 0; str[len] != '\0'; len++)
		;
	dup = (char *) malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	for (a = 0; a <= len; a++)
	{
		dup[a] = str[a];
	}
	return (dup);
}
