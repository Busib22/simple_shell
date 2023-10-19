

/**
 * _strcpy - can you stop copying codes
 * @dest: github
 * @src: alx copywrite
 * Return: kimba
 */
char *_strcpy(char *dest, char *src)
{
	char *alfa = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (alfa);
}

/**
 * _split - split string
 * @alli: string
 * @sep: separator
 * Return: God when
 */

char **_split(char *alli, char *sep)
{
	char *aux, **split_alli;
	int i = 0;

	aux = strtok(alli, sep);
	split_alli = (char **)_pelog(100, sizeof(char *));

	if (!split_alli)
	{
		free(split_alli);
		return (NULL);
	}

	while (aux)
	{
		split_alli[i] = aux;
		aux = strtok(NULL, sep);
		i++;
	}
	return (split_alli);
}

/**
 * _strcat - i love you
 * @dest: am joking oooo
 * @src: screc
 * Return: ionooo
 */

char *_strcat(char *dest, char *src)
{
	int shin, tech;

	for (shin = 0; dest[shin] != '\0'; shin += 1)
	{}

	for (tech = 0; src[tech] != '\0'; tech += 1)
	{
		dest[shin] = src[tech];
		shin++;
	}
	dest[shin] = '\0';
	return (dest);
}

/**
 * _strlen - string length
 * @s: string
 * Return: result
 *
 */

int _strlen(char *s)
{
	int werreh = 0;

	while (s[werreh] != '\0')
		werreh++;

	return (werreh);
}



