#include "main.h"
#include <unistd.h>
/**
 * _putchar - inserts the character s to stdout
 * @s: The character to output
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char s)
{
	return (write(1, &s, 1));
}
