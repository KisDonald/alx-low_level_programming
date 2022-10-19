#include "main.h"

/**
 * _islower - check if a char is lowercase
 * @c: is the char to be checked
 * Return: 1 if letter is la, 0 if not
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
