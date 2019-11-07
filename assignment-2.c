#include <stdio.h>
#include <stdbool.h>

unsigned int countCalls(bool reset);

void testCountCalls();

double pi();

unsigned short daysInMonth(unsigned int month);


int main() {
    // CountCalls
    testCountCalls();
    // Approximates value of pi to the precision of a double: 3.14159265358979
    printf("pi is %.14f \n", pi());
    // The number of days in month
    printf("The number of days is %d \n", daysInMonth(12));


}
/**
 * countCalls
 * @param reset
 * @return If called with false, the function increments problem1Count and returns 0.
 * If called with true, the function resets
 * problem1Count to 0 and returns the number
 * of times the function was called since
 * the last time it was reset.
 * Does: Increment problem1count.
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


/**
 * Call problem1count function several times with false to build up a count, then call it with true.
 * Report the value returned from the function for each call. By way of example,
 * if the function is called four times with false, it returns 0 each time.
 * If then called with true, it returns 4 and resets problem1Count back to 0.
 */
void testCountCalls() {
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
 * pi
 * @return Use a loop to add successive terms of the series until the previous sum and sum
 * with the next term are the same.
 * Return this value as the result of the function
 */
double pi() {
    double successiveNumber = 2.0f;
    double pi = 3.0f;
    double sumWithPreviousTerm;
    double sumWithNextTerm;
    while (true) {
        pi = pi + 4 / (successiveNumber * (successiveNumber + 1) * (successiveNumber + 2));
        successiveNumber = successiveNumber + 2;
        sumWithPreviousTerm = pi;
        pi = pi - 4 / (successiveNumber * (successiveNumber + 1) * (successiveNumber + 2));
        successiveNumber = successiveNumber + 2;
        sumWithNextTerm = pi;
        if (sumWithPreviousTerm == sumWithNextTerm) {
            return pi;

        }

    }

}

/**
 * daysInMonth
 * @param The function takes a month number between 1 (Janauary) and 12 (December)
 * @return number of days in any month (assuming 28 for February). If the input value is not a valid month number,
 * return 0 from the function.
 */
unsigned short daysInMonth(unsigned int month) {
    if (month < 0 && month > 12) {
        return 0;

    }

    unsigned short numDays = 0;
    switch (month) {
        case 2:
            numDays = 28;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            numDays = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            numDays = 30;
            break;


    }

    return numDays;


}





