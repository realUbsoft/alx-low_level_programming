#include "main.h"
/**
<<<<<<< HEAD
 * _memset - function that fills memory with a constant byte
 * @s: first value
 * @b: second value
 * @n: thirth value
 *
 * Return: char with result of memset
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
=======
 * _memset - fills memory with a constant byte.
 * @s: source string
 * @b: the contant byte for filling
 * @n: lenght of buffer
 * Return: new string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
>>>>>>> 51790905ba053f3a4c65c39b4bdd0f504350e7e3
}
