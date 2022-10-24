/*
 * Auth: Jhonier Santana
 */
#include "main.h"

/**
 * _puts_recursion - print a string followed by a new line
 * @s: string to print
 *
 * Return: void
 */
void _puts_recursion(char *a)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}