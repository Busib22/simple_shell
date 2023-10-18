#include "main.h"

/**
 * nada_ln - its non of my bus
 * @lubbf_F: something to check
 * Return: i dont know
 */

int nada_ln(char *lubbf_F)
{
	int water;

	for (water = 0; lubbf_F[water] != '\0'; water++)
	{
		if (lubbf_F[water] != ' ')
			return (0);
	}
	return (1);
}
