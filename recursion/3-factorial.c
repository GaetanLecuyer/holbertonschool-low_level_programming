#include "main.h"
/*librert to declare in fonction*/


int factorial(int n)
{
    if (n < 0)
{
                return(-1);
}
     else if (n == O)
{
               return(1);
}
    else 
{
                    int mul;
                    mul = factorial(n - 1);
                    return(n * mul);
}  
}
