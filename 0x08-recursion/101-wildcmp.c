#include "main.h"

/**
 *wildcmp - compares 2 strings
 *
 *@s1: string to compare
 *@s2: string to compare containing special character *
 *
 *Return: 1 if identical, 0 if else
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '\0')        /* if exactly same */
			return (1);
		if (*s2 == '*')         /* s1 = "", s2 = "*" */
			return (wildcmp(s1, s2 + 1));
	}

	if (*s1 == *s2)
		/*compare by each index*/
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		/* increment only one string or another, till same result*/
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

	else
		return (0);

}
