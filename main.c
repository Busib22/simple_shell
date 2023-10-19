#include "main.h"

/**
 * main - where to open the gate of shell
 * Return: then close the gate of shell
 */
int main(voila)
{
	char *lubbf_F = NULL, **args;
	size_t read_size = 0;
	ssize_t buff_size = 0;
	int exit_status = 0;

	while (1)
	{

		if (isatty(0))
			printf("busi$ ");

		buff_size = getline(&lubbf_F, &read_size, stdin);
		if (buff_size == -1 || _strcmp("exit\n", lubbf_F) == 0)
		{
			free(lubbf_F);
			break;
		}
		lubbf_F[buff_size - 1] = '\0';

		if (_strcmp("env", lubbf_F) == 0)
		{
			_env();
			continue;
		}

		if (nada_ln(lubbf_F) == 1)
		{
			exit_status = 0;
			continue;
		}

		args = _split(lubbf_F, " ");
		args[0] = awari_Path(args[0]);

		if (args[0] != NULL)
			exit_status = killem(args);
		else
			perror("Error");
		free(args);
	}
	return (exit_status);
}
