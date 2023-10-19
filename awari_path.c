

char *awari_Path(char *jagjagun)
{
	char *onah = _vnget("PATH"), *onah_cpy;
	char **onah_split;
	char *onah_concat = NULL;
	int i = 0, onah_len = 0;
	struct stat info;

	if (stat(jagjagun, &info) == 0)
		return (jagjagun);

	onah_cpy = malloc(_strlen(onah) + 1);

	onah_cpy = _strcpy(onah_cpy, onah);
	onah_split = _split(onah_cpy, ":");

	while (onah_split[i])
	{
		onah_len = _strlen(onah_split[i]);

		if (onah_split[i][onah_len - 1] != '/')
			onah_concat = _strcat(onah_split[i], "/");

		onah_concat = _strcat(onah_split[i], jagjagun);

		if (stat(onah_concat, &info) == 0)
			break;

		i++;
	}

	free(onah_cpy);

	if (!onah_split[i])
	{
		free(onah_split);
		return (NULL);
	}

	free(onah_split);
	return (onah_concat);
}
