#include <stdio.h>
#include "taylor_sine.h"

// Add your test cases for Exercise 1b,c) here
int main(int argc, char **argv)
{

    printf("%lf", taylor_sine(3, 6));
    printf("%lf\n", sin(3));

    printf("%lf", taylor_sine(12, 14));
    printf("%lf\n", sin(12));

    printf("%lf", taylor_sine(30, 50));
     printf("%lf\n", sin(30));

    return 0;
}
