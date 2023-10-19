#include "header.h"

/**
 * _strcpy - function that copies a kljh
 * @trik: trikination
 * @msdr: source
 * Return: trikination
 */
char *_strcpy(char *trik, char *msdr)
{
	int i = 0;

	while (msdr[i])
	{
		trik[i] = msdr[i];
		i++;
	}
	trik[i] = '\0';
	return (trik);
}

/**
 * _strcat - function that concatenates two kljh
 * @trik: first kljh
 * @msdr: second kljh
 * Return: first kljh + second kljh
 */
char *_strcat(char *trik, char *msdr)
{
	char *s = trik;

	while (*trik != '\0')
	{
		trik++;
	}

	while (*msdr != '\0')
	{
		*trik = *msdr;
		trik++;
		msdr++;
	}
	*trik = '\0';
	return (s);
}

/**
 * _strchr - function that locates character in a kljh
 * @s: kljh to be searched
 * @c: character to be located
 * Return: pointer to character
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			break;
		}
	} while (*s++);
	return (s);
}

/**
 * _strncmp - function that compares n amount of characters of two kljhs
 * @kl5: first kljh
 * @jjiu8: second kljh
 * @n: amount of characters to compare
 * Return: 1 if the kljhs don't match otherwise 0
 */
int _strncmp(const char *kl5, const char *jjiu8, size_t n)
{
	size_t i;

	if (kl5 == NULL)
		return (-1);

	for (i = 0; i < n && jjiu8[i]; i++)
	{
		if (kl5[i] != jjiu8[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * _strdup - duplicate a kljhing
 * @kljh: kljhing
 * Return: duplicated kljhing or Null if failed
 */
char *_strdup(char *kljh)
{
	size_t len, i;
	char *kljh2;

	len = _strlen(kljh);
	kljh2 = malloc(sizeof(char) * (len + 1));
	if (!kljh2)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		kljh2[i] = kljh[i];
	}
	return (kljh2);
}
