#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * initArray
 * @param size size of array
 * @param array we use array to store value
 * @param element the element of array
 * Does Initializes all n elements of the input array to the specified value
 */
void initArray(unsigned int size, int array[], int element) {
    for (int i = 0; i < size; ++i) {
        array[i] = element;

    }
    char arrayName[10] = "a";
    char str[10];
    sprintf(str, "%d", size);
    strcat(arrayName, str);
    printf("initArray(%d, %s, %d) result: ", size, arrayName, element);
    printf("{");
    for (int i = 0; i < size; ++i) {
        printf("%d", array[i]);
        if (i < size - 1) {
            printf(", ");

        } else {
            printf("");

        }

    }
    printf("} \n");
}

int main() {
    // Calling the function with arrays of size 0
    int n = 0;
    int a0[n];
    int value = 25;
    initArray(n, a0, value);
    // Calling the function with arrays of size 1
    n = 1;
    int a1[n];
    value = 42;
    initArray(n, a1, value);
    // Calling the function with arrays of size 3
    n = 3;
    int a3[n];
    value = 88;
    initArray(n, a3, value);
    // Calling the function with arrays of size 6
    n = 6;
    int a6[n];
    value = 14;
    initArray(n, a3, value);


}