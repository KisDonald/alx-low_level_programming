#include "main.h"
#include <unistd.H>

/**
 *_putchar - writes char  c to stdout
 * @c: the character to print
 *
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write (1, &c, 1));

}
