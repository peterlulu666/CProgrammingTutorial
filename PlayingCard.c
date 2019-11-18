#include <stdio.h>
#include <stdlib.h>

/*
 * Card suit and value
 */
typedef uint8_t Card;

/*
 * Card suit
 */
typedef enum {
    hearts, diamonds, clubs, spades
} CardSuit;

/*
 * Card value
 */
typedef enum {
    ace = 1, two, three, four, five, six, seven, eight, nine, ten, jack, queen, king
} CardValue;

/*
 * Name of card suit
 */
const char *cardSuit[] = {"hearts", "diamonds", "clubs", "spades"};

/*
 * Name of value
 */
const char *cardValue[] = {"", "ace", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "jack",
                           "queen", "king"};

/**
 * makeCard
 * @param suit
 * @param value
 * @return Card suit and value
 */
Card makeCard(CardSuit suit, CardValue value) {
    return suit << 4 | value;

}

/**
 * getCardValue
 * @param card
 * @return Card value
 */
CardValue getCardValue(Card card) {
    return card & 0xF;

}

/**
 * getCardSuit
 * @param card
 * @return Card suit
 */
CardSuit getCardSuit(Card card) {
    return card >> 4;

}

/**
 * cardToString
 * @param card
 * @param str
 * @return Card string
 */
char *cardToString(Card card, char *str) {
    int value = getCardValue(card);
    int suit = getCardSuit(card);
    sprintf(str, "%s of %s", cardValue[value], cardSuit[suit]);
    return str;

}

int main() {
    char cardStr[20];
    for (CardSuit suit = hearts; suit < spades + 1; ++suit) {
        for (CardValue value = ace; value < king + 1; ++value) {
            Card card = makeCard(suit, value);
            printf("%s\n", cardToString(card, cardStr));

        }
        printf("\n");

    }
}






