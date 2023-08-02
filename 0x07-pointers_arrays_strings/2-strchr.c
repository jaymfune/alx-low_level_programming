/**
 * _strchr - Locates the first occurence of a character in a string.
 *
 * @s: A pointer to the string.
 * @c: The character.
 *
 * Return: Return a pointer to the first occurence of the character,
 *	   Return NULL if the character isn't found.
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}

	return ('\0');
}
