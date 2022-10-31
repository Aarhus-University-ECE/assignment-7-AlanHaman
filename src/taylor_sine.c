#include "taylor_sine.h"

#include <assert.h>
#include <math.h>
double taylor_sine(double x, int n) {
    /* implement your function here */
    // assert to make sur n>0
    assert(n > 0);

    
    // round counts which power and factorization we are at. 
    double sine = 0;
    int round = 1;
    int sign = 1;

    // Jeg laver en for løkke så man regner Sinus med n præcision.
    for (int i = 1; i <= n; i++) {
        // Jeg opretter en variabel, som skal indeholde værdien af brøken for
        // hvert gennemløb.
        double fraction;

        // Dette for loop regner tælleren i brøken. Altså x^runde. Jeg gemmer
        // svaret i variablen top.
        double top = x;
        for (int j = 1; j < round; j++) {
            top = top * x;
        }

        // Her er et for loop som regner nævneren i brøken. Altså fakulteten af
        // runde. Den gemmer jeg i variablen bottom.
        double bottom = 1;
        for (int j = 1; j <= round; j++) {
            bottom = bottom * j;
        }

        // Fraction er brøken altså top delt med bottom.
        fraction = top / bottom;

        // Her opdaterer jeg Sine variablen til indeholde den nye brøk *
        // fortegnet sign.
        sine = sine + (sign * fraction);

        // Her opdaterer jeg sign, så fortegnet skifter mellem -1 og 1.
        sign = sign * -1;

        // Her opdaterer jeg runde, så runde skifter i intervallet 1, 3, 5 osv..
        round = round + 2;
    }

    return sine;
}
