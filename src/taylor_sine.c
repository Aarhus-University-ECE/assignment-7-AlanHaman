#include "taylor_sine.h"
double taylor_sine(double x, int n)
{
    /* implement your function here */

    double sum = x;
    double value = x;
    int fac = 1;
    
    // for loop 
    for (int counter = 0; counter < n; counter++)
    {
        fac += 2;

        value = -value * x * x / fac / (fac - 1);

        sum += value;
    }

    return sum;
}
