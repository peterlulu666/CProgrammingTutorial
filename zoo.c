#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Create an Animal enum for the animals listed above in that order,
// and add Animal_kinds at the end of the enum as the number of kinds of Animals
typedef enum {
    anteater,
    bear,
    cheetah,
    elephant,
    giraffe,
    lion,
    monkey,
    rhinoceros,
    tiger,
    zebra
} Animal;

// Create a Zoo typedef as an array of unsigned int
// representing the counts for each kind of Animal in the Zoo's collection.
const int Animal_kinds = 10;
typedef unsigned int Zoo[Animal_kinds];
// Write a function void makeZoo(Zoo aZoo) that initializes the Zoo to
// have no Animals in its collection.
/**
 * makeZoo
 * @param aZoo
 * Does initializes the Zoo to have no Animals in its collection
 */
void makeZoo(Zoo aZoo) {
    for (int i = 0; i < Animal_kinds; ++i) {
        aZoo[i] = 0;

    }
}

// Write a function unsigned int addAnimal(Zoo aZoo, Animal anAnimal) that adds an Animal to the
// Zoo and returns the current count for that Animal.
/**
 * addAnimal
 * @param aZoo
 * @param anAnimal
 * @return the current count for that Animal
 * Does adds an Animal to the Zoo
 */
unsigned int addAnimal(Zoo aZoo, Animal anAnimal) {
    return aZoo[anAnimal] = aZoo[anAnimal] + 1;

}

// Write a function const char* getAnimalName(Animal anAnimal) that returns the
// name of the Animal. Declare a local array static const char *animalNames[],
// initialized with the literal strings for the Animal names using the
// Animal enumeration value as an index into the animalNames array.
// The function can return the string because the animalNames is a static array of literal strings.
/**
 * getAnimalName
 * @param anAnimal
 * @return strings for the Animal names
 */
const char *getAnimalName(Animal anAnimal) {
    // Static variables inside functions are initialized only once and retains their current state
    // between function calls. They are similar to global variables,
    // but static variables are only visible inside the function they are defined.
    static const char *animalNames[] = {
            "anteater",
            "bear",
            "cheetah",
            "elephant",
            "giraffe",
            "lion",
            "monkey",
            "rhinoceros",
            "tiger",
            "zebra"
    };
    return animalNames[anAnimal];

}

// Write a function void printZoo(const Zoo aZoo) that prints an inventory of
// the animals in the Zoo. The output is one animal per line with
// the count in a blank-padded field of 3 digits (%3u), followed by a tab
// character ('\t') followed by the name of the animal.The
// function uses getAnimalNames() to get the Animal names.
/**
 * printZoo
 * @param aZoo
 * Does print one animal per line with the count in a blank-padded field of 3 digits (%3u),
 * followed by a tab character ('\t') followed by the name of the animal
 */
void printZoo(const Zoo aZoo) {
    for (Animal i = anteater; i < zebra + 1; ++i) {
        int count = aZoo[i];
        printf("%3u \t %s \n", count, getAnimalName(i));

    }

}

// Write a int main(void) function that creates a Zoo
// and calls makeZoo() to initialize it. Then it calls
// addAnimal() to add a number of each Animal to the Zoo
// corresponding to the enumeration value of the Animal.
// For each Animal added, it prints the Animal name and
// the new count using this format: "Added %s count: %u\n"
// Finally it uses printZoo() to print animals in the Zoo and their counts.
int main(void) {
    Zoo aZoo;
    makeZoo(aZoo);
    for (Animal anAnimal = anteater; anAnimal < zebra + 1; ++anAnimal) {
        for (int j = 0; j < anAnimal; ++j) {
            printf("Added %s count: %u\n", getAnimalName(anAnimal), addAnimal(aZoo, anAnimal));

        }
        printZoo(aZoo);

    }

}



















