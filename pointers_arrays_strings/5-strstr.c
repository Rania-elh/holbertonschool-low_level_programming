#include "main.h"
#include <stdio.h>

/**
 * _strstr - Entry point
 *@needle: input
 *@haystack: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			int j = 1;

			while (needle[j] != '\0' && haystack[i + j] == needle[j])
			{
				j++;
			}
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
		}
	}
	return (NULL);
}
