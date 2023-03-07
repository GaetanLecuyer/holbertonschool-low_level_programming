/*code by gaetan*/
/*main.h is a ibrery of the fonction */
#include "main.h"
/*n in the output of the main.c*/
/*mul is a quntificateur mutipliacateur of the value of n */
/*if is cndition for number negative*/
/*else a condition for number positive*/
/*mul and fcatorial calcul la factorisatiion*/
/*revoie la factorisation*/

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
