#include "shell.h"

/**
 * interactive – to be returned true if shell is interactive mode
 * @info: is struct address
 *
 * Return: 1 if shell is interactive mode, 0 if not
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - checks if the character is a delimeter
 * @u: the char to check
 * @delim: the delimeter string
 * Return: 1 if true, 0 if otherwise
 */
int is_delim(char u, char *delim)
{
	while (*delim)
		if (*delim++ == u)
			return (1);
	return (0);
}

/**
 * _isalpha - checking for alphabetic character
 * @c: The character to be inputed
 * Return: 1 if u is alphabetic, 0 if not
 */

int _isalpha(int u)
{
	if ((u >= 'a' && u <= 'z') || (u >= 'A' && u <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * _atoi - converting a string to an integer
 * @s: the string to convert
 * Return: 0 if no numbers in string, converted number if not
 */

int _atoi(char *s)
{
	int q, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (q = 0; s[q] != '\0' && flag != 2; q++)
	{
		if (s[q] == '-')
			sign *= -1;

		if (s[q] >= '0' && s[q] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[q] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
