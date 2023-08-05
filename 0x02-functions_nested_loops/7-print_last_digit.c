#include "main.h"

/**
 * print_last_digit - Entry point
 * @r: int input
 * Description: prints the last digit of a number
 * Return: last digit of number r
 */

int print_last_digit(int a)
{
	int b;
	b = a % 10;
	if (b < 0)
		b = b *(-1) ;
	return b;
}
