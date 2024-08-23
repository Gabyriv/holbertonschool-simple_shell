#include "shell.h"

/**
 *_strcmp - compares 2 strings
 *@str1: first string to comapred
 *@str2: second string to compared
 *return: 0 if strings are the same
 *
 */

int _strcmp(char *str1, char *str2)
{
	int a;

	for (a = 0; str1[a] != '\0'; a++)
		;
	for (a = 0; str2[a] != '\0'; a++)
	{
		if (str1[a] != str2[a])
		{
			return (str1[a] - str2[a]);
		}
	}
	return (0);
}

