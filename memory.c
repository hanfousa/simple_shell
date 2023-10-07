#include "shell.h"

/**
 * bfree - freeing a pointer and NULLs the address
 * @ptr: the address of the pointer to free in
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
