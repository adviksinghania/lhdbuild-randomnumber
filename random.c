// gcc.exe (MinGW.org GCC Build-2) 9.2.0
// Author: Advik Singhania
// Date: 12th January 2021

// Importing standard libaries and time.h header
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Main function:
int main() {
    // Passing the time period as a parameter for srand() function to
    // generate a new seed every time the program runs
    srand(time(NULL));
    
    // for loop to print 5 random numbers
    for (int i = 0; i < 5; i++)
        printf("Random number %d: %d\n", i+1, rand());  // rand() function to get the random numbers

    // Exiting successfully
    return(0); // EXIT_SUCCESS
}
