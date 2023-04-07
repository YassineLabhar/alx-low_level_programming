#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 * @c: The input character to check
 * Return: int.
 */

int _isalpha(int c)
	{
		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	}

