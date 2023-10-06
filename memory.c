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




realloc.c

#include "shell.h"

/**
 * _memset – it fills memory with a constant byte in
 * @s: the pointer to the memory of area
 * @b: the byte to the fill *s with
 * @n: the amount of bytes to fill in
 * Return: (s) a pointer to the memory of area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * ffree - freeing a string of strings
 * @pp: a string of strings
 */
void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}

/**
 * _realloc – reallocating a block of memory
 * @ptr: a pointer to previous malloc'ated block
 * @old_size: the byte size of previous block
 * @new_size: a byte size of new block
 *
 * Return: pointer to da ol'block nameen.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}

