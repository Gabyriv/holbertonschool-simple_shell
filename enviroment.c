#include "shell.h"

/**
 *_getenv - get content of global variable.
 *@global_val: variable to extract
 *return: pointer to the content for a variable
 */

char *_getenv(char *global_var)
{
	int i = 0;
	const char c[] = "=";
	char *env_tok, *envdup, *env_tok_dup;

	if (global_var != NULL)
	{
		if (environ == NULL)
			return (NULL);
		envdup = _strdup(environ[i]);
		while (envdup != NULL)
		{
			env_tok = strtok(envdup, c);
			if (_strcmp(env_tok, global_var) == 0)
			{
				env_tok = strtok(NULL, c);
				env_tok_dup = _strdup(env_tok);
				free(envdup);
				return (env_tok_dup);
			}
			i++;
			free(envdup);
			envdup = _strdup(environ[i]);
		}
	}
	return (NULL);
}
