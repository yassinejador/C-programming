#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*
        time(NULL):

        The time() function is used to retrieve the current time in seconds since the "epoch"
        (a specific point in time, often January 1, 1970).
        time(NULL) returns the current time as a time_t value (usually a 32 or 64-bit integer)
        , representing the number of seconds that have passed since the epoch.
        srand():

        The srand() function is used to seed the random number generator.
        When you seed the random number generator with a specific value, it sets the starting
        point for generating the sequence of random numbers.
    */
    srand(time(NULL));
    // rand() : generate number between 0 and 32.767

    int randomNumber = rand() % 6 + 1;
    printf("The number is : %d\n", randomNumber);

    return 0;
}