#include "main.h"
#include <stdio.h>

/**
 * _strstr - Finds the first occurrence of the substring 'needle' in the string 'haystack'
 * @haystack: The string to be searched
 * @needle: The substring to find
 *
 * Return: A pointer to the first occurrence of 'needle' in 'haystack',
 *         or NULL if 'needle' is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    int i, j;

    if (*needle == '\0')
        return haystack;

    for (i = 0; haystack[i] != '\0'; i++)
    {
        for (j = 0; needle[j] != '\0'; j++)
        {
            if (haystack[i + j] != needle[j])
                break;
        }
        if (needle[j] == '\0')
            return &haystack[i];
    }

    return NULL;
}

