#include <ctype.h>
#include "main.h"
/**
 * _isdigit -  checks wether the letter is uppercase or not
 *
 * @c: is the letter
 * extra description for nothing
 * Return: equal 1 if ture and 0 if not
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
