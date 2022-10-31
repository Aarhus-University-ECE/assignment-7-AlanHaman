#include "taylor_sine.h"

#include <assert.h>
#include <math.h>
double taylor_sine(double x, int n) {
    /* implement your function here */
    // assert to make sure n>0
    assert(n > 0);

    
    // round counts which power and factorization we are at. 
    double sine = 0;
    int round = 1;
    int sign = 1;

    // for loop to calculate sine with n precision
    for (int i = 1; i <= n; i++) {
        
        double fraction;

        // Another for-loop to calculate the numerator in the fraction
        double top = x;
        for (int j = 1; j < round; j++) {
            top = top * x;
        }

        // Another for-loop to calculate the denominator in the fraction
        double bottom = 1;
        for (int j = 1; j <= round; j++) {
            bottom = bottom * j;
        }

       
        fraction = top / bottom;

       
        sine = sine + (sign * fraction);

        
        sign = sign * -1;

        // Here we update the round, so it changes to 1, 3, 5...
        round = round + 2;
    }

    return sine;
}
