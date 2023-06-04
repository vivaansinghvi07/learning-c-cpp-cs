#include <stdio.h>
int main(void) {

    // escape characters are often used and start with a backslash
    
    // display integers with %d
    int age, weight, height;
    age = 16;
    weight = 140;
    height = 71;
    printf("Age: %d, Weight: %d, Height: %d, Literal: %d\n", age, weight, height, 1);

    // display octal and hex values with %o and %x respectively
    int number = 255;
    printf("Octal: %o\n", number);
    printf("Hex: %x or %X\n", number, number);      // %X for capital hex representations

    // printing type modifications
    unsigned int counter = 3000000000; // compiler compiles as a 32 bit integer, stored as 101...
    printf("Unsigned: %u, Signed: %d\n", counter, counter);   // interpreted as unsigned, then as normal int
}