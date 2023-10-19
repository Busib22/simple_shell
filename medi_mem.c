#include "main.h"

/**
 * _pelog - yoruba word for calllog
 * @berray: betty array (nice)
 * @gbangban: shoe ghangban
 * Return: betty only
 */

void *_pelog(unsigned int berray, unsigned int gbangban)
{
	unsigned int sunday = 0;
	char *soldier = NULL;

	if (berray == 0 || gbangban == 0)
		return (NULL);

	soldier = malloc(berray * gbangban);

	if (soldier == NULL)
		return (NULL);

	for (; sunday < (berray * gbangban); sunday++)
		soldier[sunday] = 0;

	return (soldier);
}
