#include "main.h"
#include <string.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	char* result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	
	result = (char*)malloc((len1 + len2 + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcpy(result + len1, s2);

	result[len1 + len2] = '\0';

	return (result);
}
