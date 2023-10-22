/**
 * is_separator - check if character is a separator
 * @c: separator character
 *
 * Return: 1 or 0
 */

int is_separator(char c)
{
	/* Check if character is a separator */
	int i;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}


	}
	return (0);
}

/**
 * cap_string - capitalize the first letter of a new word
 * @str: string containing words
 * Return: a capitalized charater on succes
 */

char *cap_string(char *str)
{
	int i;
	int new_word = 1; /* Initialise new word to be true */

	for (i = 0; str[i] != '\0'; i++)
	{
		if (is_separator(str[i]))
		{
			new_word = 1;
		}
		/*Check if character is preceded by a separator and is a lower case letter*/
		else if (new_word && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A'; /* capitalize letter*/
			new_word = 0;
		}
		else
		{
			new_word = 0;
		}
	}
	return (str);
}
