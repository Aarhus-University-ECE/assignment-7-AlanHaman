#include <stdio.h>
#include "taylor_sine.h"

// Add your test cases for Exercise 1b,c) here
int main(int argc, char **argv)
{

    printf("%lf", taylor_sine(1, 8));
    printf("\n");

    printf("%lf", taylor_sine(10, 12));
    printf("\n");

    printf("%lf", taylor_sine(20, 50));
    printf("\n");

    return 0;
}
