#include "shell.h"

/**
 * _strlen - returning length ofto a string
 * @s: the string whose length to the check
 *
 * Return: integer length of stringin
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - performings lexicogarphic comparison of two strangs.
 * @s1: the first strangin
 * @s2: the second strangin
 *
 * Return: negative if s1 < s2, positive if s1 > s2, zero if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - checking if if needle starts with haystack
 * @haystack: string to search out
 * @needle: the substring to find in
 *
 * Return: the address of next char of haystack orto  NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - concatenating two strings
 * @dest: destinationof  buffer
 * @src:  source of  buffer
 *
 * Return:the  pointer to destination buffer
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
