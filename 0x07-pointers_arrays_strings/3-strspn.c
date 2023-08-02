/**
 * _strspn - Gets the lentgh of a prefix substring.
 *
 * @s: A pointer to the string
 * @accept: A pointer to the substring.
 *
 * Return: The number of bytes in the initial segment of @s which consist only
 *	   of bytes from @accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0, len_acc = 0;

	while (accept[len_acc] != '\0')
	{
		len_acc++;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < len_acc; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				j = len_acc;
			}
			else
			{
				if (j == len_acc - 1)
				{
					goto exit;
				}
			}
		}
	}

exit: return (len);
}
