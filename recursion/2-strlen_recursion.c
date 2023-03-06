#include "main.h"
#include "string.h"
/*prog by gaetan Lecuyer*/
/*main.h is a bibliotheque*/
/*string.h is a bibliatheque of the sting*/
/*char is a character chain of a pointer *s*/
/*int _strlen_recursion(char *s) is a fonction*/

int _strlen_recursion(char *s)
{
    int len = 0;

    if (*s)
    {
        len ++;
        len += _strlen_recursion(s + 1);
    }

    return(len);
    
}
