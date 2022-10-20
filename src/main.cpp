#include <stdio.h>
#include "taylor_sine.h"

// Add your test cases for Exercise 1b,c) here
int main(int argc, char **argv)
{

    printf("%lf", taylor_sine(1, 9));
    printf("\n");

    printf("%lf", taylor_sine(12, 14));
    printf("\n");

    printf("%lf", taylor_sine(30, 50));
    printf("\n");

    return 0;
}
