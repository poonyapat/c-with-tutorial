// add library for Input and Output
// stdio => standard IO
#include <stdio.h>

// main function
int main(){
    // variable declaration
    int integer = 100000000;        // often use %d
    float floatNumber = 3.141;      // often use %f
    char character = 'C';           // often use %c
    char character2 = 99;           // char can converse into int, so it can use %d as well
    double doubleNumber = 3.141;    // often use %lf (%f is not good for double.) 
    long longNumber = 1000000000;   // often use %ld (in present, int = long)
    long long longlongNumber = 100000000000000000;      // long long = %lld
    printf("%d %.1f %c %c\n", integer, floatNumber, character, character2);
    printf("------------------------------------------------------------------------------------\n");
    printf("long long:\t %lld\t long:\t %ld\n", longlongNumber, longNumber);
    printf("double:\t\t %.20f\t float:\t %.20f\n", doubleNumber, floatNumber);
    printf("------------------------------------------------------------------------------------\n");
    integer = floatNumber;
    printf("%d %.1f\n", integer, floatNumber);

    return 0;
}