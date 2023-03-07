#include "main.h"
/*librert to declare in fonction*/


int factorial(int n)
{
    int mul;

    if (n < 0)
         return(-1);

     else if (n >= 0 && n <= 1)
            return(1);

        mul = factorial(n - 1);

        return(n * mul);  
}
