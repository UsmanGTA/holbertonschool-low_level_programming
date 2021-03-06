#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - main logic
 * @str: contains string
 * Return: NewString
 */

char *_strdup(char *str)
{
	int length = 0;
	int index = 0;
	char *NewStr;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[index] != '\0')
	{
		length++;
		index++;
	}

	NewStr = malloc(sizeof(char) * length + 1);

	p = NewStr;

	if (NewStr == NULL)
	{
		return (NULL);
	}

	for (index = 0; str[index] != '\0'; index++)
	{
		p[index] = str[index];
	}

	p[index] = '\0';

	return (NewStr);
}
