#include "main.h"

/**
 * killem - he was holding a gun for killem
 * @args: i hate arguents ehn
 * Return: dont come back again
 */

int killem(char **args)
{
	int dodo = fork(), status;

	if (dodo == 0)
	{
		if (execve(args[0], args, environ) == -1)
			perror("Error");
	}
	else
	{
		wait(&status);
		if (WIFEXITED(status))
			status = WEXITSTATUS(status);
	}

	return (status);
}
