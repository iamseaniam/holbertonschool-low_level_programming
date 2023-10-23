#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* 
 *This function, string_nconcat, takes two input strings, 's1' and 's2', nd'n'.
 *It concatenates the first 'n' characters of 's2' to 's1' or the e 's2' if 'n'
 *to the length of 's2'. The result is stored in a dynamically allocated string.
 *
 *Parameters:
 *- s1: The first input string. If NULL, it is treated as an empty string.
 *- s2: The second input string. If NULL, it is treated as an empty string.
 *- n: The maximum number of characters to concatenate from 's2' to 's1'.
 *
 *Return Value:
 *- Returns a dynamically allocated string containing the concatenated result. 
 *The caller is responsible for freeing the memory allocated for this string.
 *- If memory allocation fails, it returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int concat_len = 0;
	char *concat_str = NULL;

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

	if (n >= len2)
	{
		concat_len = len1 + len2;
	}
	else
	{
		concat_len = len1 + n;
	}
	concat_str = (char *)malloc((concat_len + 1) * sizeof(char));
	if (concat_str == NULL)
	{
		return (NULL);
	}
	strcpy(concat_str, s1);
	strncat(concat_str, s2, n);
	concat_str[concat_len] = '\0';

	return (concat_str);
}
