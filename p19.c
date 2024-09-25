#include <stdio.h>
#include <stdlib.h>  // For rand() and srand()
#include <time.h>    // For time()

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 0 and RAND_MAX
    int random_number = rand();

    printf("Random number: %d\n", random_number);

    return 0;
}
