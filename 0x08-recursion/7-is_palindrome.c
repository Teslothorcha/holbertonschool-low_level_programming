/**
 * _strlen - length of string `s'
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * pal - compares `s' to itself from beginning to end
 * @chek: begining of string
 * @match: end of  string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int pal(char *chek, char *match)
{
	if (*chek != *match)
		return (0);
	if (chek >= match)
		return (1);
	return (pal(++match, --chek));
}
/**
 * is_palindrome - tests palindrome
 * @s: string to test
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int c = _strlen(s) - 1;

	return (pal(s, s + c));
}
