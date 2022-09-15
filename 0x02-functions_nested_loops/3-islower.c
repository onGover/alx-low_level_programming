#include "main.h"
/**
 * _islower - function to check for lowercase character
 * @c: is the init that will use for the argment of the function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return(0);
}
