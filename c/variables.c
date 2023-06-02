#include <stdio.h>

int main(void) {

    // base types
    int number = 1000;
    char character = 'a';
    char second_character = character + 1;  // characters can be converted to ints - this is 'b'
    float pi = 3.14159;
    float light_speed = 2.99E8; // you can also use E notation
    double pi_precise = 3.14159263538979323;

    // signed and unsigned type modifiers
    unsigned int counter = 1;   // still stores in normal size, but you have twice the range in the positive direction
    counter = -1;   // integer wrapping occurs, as you cannot have negative numbers
    printf("Counter: %u\n", counter);

    // forces compiler to represent characters with 1 signed bit and 7 unsigned, for supporting overflow
    signed char third_character = 'd';  

    // size modifiers
    short int small_number = 32;    // forces complier to treat ints as 16 bits, ranging between -32768 and 32767
    long int large_number = 2000000000L;   // stored with 32 bits - should end in an L
    long long int larger_number = 0xffffffffffffffffL;   // stored with 64 bits

    // hex and octal values
    short int octal_number = 024;   // preceding zero 
    int hex_number = 0x239;         // preceding 0x
    long int binary_number = 0b10110010101101;  // preceding 0b

    // holds values in register for easy access
    register short int loop_variable = 0;
    
}