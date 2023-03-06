#include "main.h"
/*programe by gaetan*/
/*main.h is a bibliotheque*/
/*s is a poiteur that lead a main of betty */
/*fonction void _print_rev_recursion(char *s) is prints a carracte is reverse*/

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s+1);
_putchar(*s);
}
}
