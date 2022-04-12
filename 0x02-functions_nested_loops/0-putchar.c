#include "main.h"
#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: 0
 **/
int main(void)
{
	char result[] = "_putchar";

	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(result[a]);
	}
	_putchar("\n");
	return (0);
}

