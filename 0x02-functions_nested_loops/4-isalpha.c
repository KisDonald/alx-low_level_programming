#include "main.h"

/**
 * _isalpha - cheks for aphabetic characters
 * @c: the char to be checked
 * Return: 1 if alphabet, 0 othereise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'Z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
