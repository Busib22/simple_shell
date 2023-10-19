#include "main.h"

/**
 * _strcmp - stop cpmaring you racist
 * @hamz1: black pointr
 * @hamz2: white pointer
 * Return: say no to racism
 */

int _strcmp(char *hamz1, char *hamz2)
{
	while (*hamz1 && *hamz2)
	{
		if (*hamz1 != *hamz2)
			return (*hamz1 - *hamz2);

		hamz1++;
		hamz2++;
	}
	return (0);
}

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



