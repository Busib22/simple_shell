#include "main.h"
/**
 *_env - envioronmental saitation variables
*/

void _env(void)
{
	int k = 0;

	while (environ[k])
	{
		printf("%s\n", environ[k]);
		k++;
	}
}

/**
 * _vnget - its a big deal
 * @env_var: variattin nii
 * Return: table of value in code
 */

char *_vnget(char *env_var)
{
	int k = 0, zil;
	int status;

	while (environ[k])
	{
		status = 1;

		for (zil = 0; environ[k][zil] != '='; zil++)
		{
			if (environ[k][zil] != env_var[zil])
				status = 0;
		}
		if (status == 1)
			break;
		k++;
	}
	return (&environ[k][zil + 1]);
}
