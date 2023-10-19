#include "main.h"
#include <stdio.h>
#include <stdlib.h>
	
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	size_t length = strlen(str);
	char* duplicate = (char*)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL)
	}
	strcpy(duplicate, str);

	return (duplicate);
}
