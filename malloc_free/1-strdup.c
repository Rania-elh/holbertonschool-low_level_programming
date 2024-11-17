#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - check the code
 *@str: input
 * Return: Always 0.
 */


char *_strdup(char *str)
{
	int i;
	int longeur;
	char *copie;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[longeur] != '\0')
	{
		longeur++;
	}

	copie = malloc(sizeof(char) * (longeur + 1));
	if (copie == NULL)
		return (NULL);

	for (i = 0; i < longeur; i++)
	{
		copie[i] = str[i];
		copie[longeur] = '\0';
	}
		return (copie);
}
