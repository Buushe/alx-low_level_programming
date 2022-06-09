#include "main.h"
/**
 * print_last_digit - prints the last digit of a numer.
 * @n: digit to find the last place of.
 * Return: The last digit.
 */
int print_last_digit(int n)
{
	 int num = n % 10;
 if (num < 0)
{
    _putchar('0' + (num * -1) % 10);
    return (num * -1);
}
    _putchar('0' + num % 10);

    return (num)
}
