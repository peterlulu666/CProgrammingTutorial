/**
 * @file assignment-1.c
 * @author  YOUR NAME
 * @date    THE DATE
 *
 * This is the first programming assignment.
 */
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

/**
 * The code in this function is the solution to the assignment.
 */
int main(void) {
    // YOUR CODE HERE
    // An unsigned integer constant squareOfThree initialized by calculating the square of 3
    unsigned const int squareOfThree = (int) pow((double) 3, 2);
    // %u is the format specifier for unsigned integer
    // %lu is the format specifier for unsigned long
    printf("name is squareOfThree, value is %u, size in byte is %lu \n", squareOfThree, sizeof(squareOfThree));
    // A double precision floating point constant e initialized to Euler's constant 2.718281828459045
    const double e = 2.718281828459045;
    // %f is the format specifier for double
    // %lu is the format specifier for unsigned long
    printf("name is e, value is %f, size in byte is %lu \n", e, sizeof(e));
    // A boolean variable isGreaterThan initialized to the logical expression 2.8 > e
    bool isGreaterThan = (2.8 > e);
    // %i is the format specifier for bool
    // %lu is the format specifier for unsigned long
    printf("name is isGreaterThan, value is %i, size in byte is %lu \n", isGreaterThan, sizeof(isGreaterThan));
    // An integer variable quotient initialized to the ratio of sum 2+4+5 divided by 3
    int quotient = (2 + 4 + 5) / 3;
    // %d is the format specifier for integer
    // %lu is the format specifier for unsigned long
    printf("name is quotient, value is %d, size in byte is %lu \n", quotient, sizeof(quotient));
    // A short integer variable remainder that is the remainder of 11 with 3
    short int remainder = 11 % 3;
    // %d is the format specifier for short integer
    // %lu is the format specifier for unsigned long
    printf("name is remainder, value is %d, size in byte is %lu \n", remainder, sizeof(remainder));
    // A double precision variable greaterValue that is 2.8 if isGreaterThan is true and e if isGreaterThan is false
    double greaterValue = (isGreaterThan) ? 2.8 : e;
    // %f is the format specifier for double
    // %lu is the format specifier for unsigned long
    printf("name is greaterValue, value is %f, size in byte is %lu \n", greaterValue, sizeof(greaterValue));
    // A single precision floating point constant oneTenth initialized to the ratio of 1.0 divided by 10.0
    const float oneTenth = 1.0f / 10.0f;
    // %f is the format specifier for floating point number
    // %lu is the format specifier for unsigned long
    printf("name is oneTenth, value is %f, size in byte is %lu \n", oneTenth, sizeof(oneTenth));
    // A character hex7A whose value is the hexadecimal constant 7A.
    const char hexadecimal = '\x7A';
    // %c is the format specifier for character
    // %lu is the format specifier for unsigned long
    printf("name is hexadecimal, value is %c, size in byte is %lu \n", hexadecimal, sizeof(hexadecimal));
    // A character constant charZ initialized to 'Z'.
    const char charZ = 'Z';
    // %c is the format specifier for character
    // %lu is the format specifier for unsigned long
    printf("name is charZ, value is %c, size in byte is %lu \n", charZ, sizeof(charZ));
    // An unsigned short variable numLetters that is the number of letters between 'A' and 'Z' inclusive
    unsigned short numLetters = ('Z' - 'A') + 1;
    // %u is the format specifier for unsigned short
    // %lu is the format specifier for unsigned long
    printf("name is numLetters, value is %u, size in byte is %lu \n", numLetters, sizeof(numLetters));


}