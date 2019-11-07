#include <stdio.h>
#include <stdbool.h>

unsigned int countCalls(bool reset);

int main() {
/**
 * Call this function from main several times with false to build up a count, then call it with true.
 * Report the value returned from the function for each call. By way of example,
 * if the function is called four times with false, it returns 0 each time.
 * If then called with true, it returns 4 and resets problem1Count back to 0.
 */
    // If we call the function four times with false, it returns 0 each time.
    printf("The function returns %d \n", countCalls(false));
    printf("The function returns %d \n", countCalls(false));
    printf("The function returns %d \n", countCalls(false));
    printf("The function returns %d \n", countCalls(false));
    // If we call the function with true, it returns 4 and resets problem1Count back to 0.
    printf("The function returns %d \n", countCalls(true));
    // The function has been called with true, so the problem1Count is reset to 0.
    // If we call the function two times with false, it returns 0 each time.
    printf("The function returns %d \n", countCalls(false));
    printf("The function returns %d \n", countCalls(false));
    // If we call the function with true, it returns 2 and resets problem1Count back to 0.
    printf("The function returns %d \n", countCalls(true));










}
/**
 * countCalls
 * @param reset
 * @return If called with false, the function increments problem1Count and returns 0.
 * If called with true, the function resets
 * problem1Count to 0 and returns the number
 * of times the function was called since
 * the last time it was reset.
 */
// Create a function unsigned int countCalls(bool reset) with a static unsigned in
// problem1Count to count the number of times the function is called
static unsigned problem1count;

unsigned int countCalls(bool reset) {
    unsigned int count;
    if (!reset) {
        // The function increments problem1Count and returns 0
        problem1count++;
        return 0;

    } else {
        // The function resets
        // problem1Count to 0 and returns the number
        // of times the function was called since
        // the last time it was reset.
        count = problem1count;
        problem1count = 0;
        return count;


    }


}

