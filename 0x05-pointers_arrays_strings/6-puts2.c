#include "main.h"
#include <string.h>

/**
 * puts2 - print every other character in a string
 *
 * @str: the string
 */

void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}

