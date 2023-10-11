#include <stddef.h>

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *ch = accept;
		while (*ch != '\0')
		{
			if (*s == *ch)
			{
				return s;
			}
			ch++;
		}
		s++;
	}
	return (NULL);
}
