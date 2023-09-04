#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* _abs - computes the absolute value of an integer
* @n: the int to check
* Return: absolute value
*/
int _abs(int n)
{
	if (n >= 0)
		return (n);
	return (-n);
}
