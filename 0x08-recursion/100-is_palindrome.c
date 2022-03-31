#include "main.h"

/**
 *_strlen_recursion - counts length of a string
 *
 *@s: string to test
 *Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(++s));
}


/**
 *test_pal - tests if string is palindrome
 *
 *@s: string to test
 *@f: first character of a string
 *@n: length of a string
 *
 *Return: 1 if palindrome, 0 if else
 */

int test_pal(char *s, int f, int n)
{
	if (f > n / 2)
		return (1);

	if (n == 1 || n == 0)        /* if one character or empty*/
		return (1);

	if (s[f] != s[n - 1 - f])          /* if first index != last index */
		return (0);

	else          /* if first index = last index */
		return (test_pal(s, ++f, n)); /* recursively check f+1,l-1 */

}

/**
 *is_palindrome - states if a string is a palindrome
 *
 *@s: string to test
 *
 *Return: 1 is palindrome, 0 if else
 */

int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	return (test_pal(s, 0, n));
}
