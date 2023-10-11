unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int found = 0;

	while (*s && !found) 
	{
		int accept_index = 0;
		while (accept[accept_index])
		{
		if (*s == accept[accept_index]) 
		{
			found = 1;
			break;
		}
		accept_index++;
	}

	if (found) 
	{
		length++;
	}
	else
	{
		break;
	}
	s++;
}
return (length);
}
