#include "shell.h"

/**
 * bfree - to  free a pointer and NULLs the address
 * @ptr: this has the address of the pointer to free
 *
 * Return: 1 if freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
