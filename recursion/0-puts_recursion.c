#include "main.h"
/* programe by gaetan */
/* main.h is a librery */
/* vid _puts_recursion(char *s) is a fonction */
/* s is a poiinter */


void _puts_recursion(char *s)
{
if (*s) 
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
