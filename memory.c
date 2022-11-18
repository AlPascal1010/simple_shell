#include "shell.h"

/**
 * bfree - frees a pointer and NULS the address
 * @ptr: address of the pointer to free
 * Return: 1 if freed , otherwise
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		frr(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
