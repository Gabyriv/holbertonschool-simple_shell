#include "shell.h"

/**
 *strcmp - compares 2 strings
 *@str1: first string to comapred
 *@str2: second string to compared
 *return: 0 if strings are the same
 *
 */

int strcmp(char *str1, char *str2)
{
	int a;

	for (a = 0; str1[a] != NULL; a++)
		;
	for (a = 0; str2[a] != NULL; a++)
	{
		if (str1[a] != atr2[a])
		{
			return (str1[a] - str[2]);
		}
	}
	return (0);
}

