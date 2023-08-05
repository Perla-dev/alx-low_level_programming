#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r, t, s;

    t = print_last_digit(98);
    _putchar('0' + t);
    s = print_last_digit(0);
    _putchar('0' + s);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
