// add library for Input and Output
// stdio => standard IO
#include <stdio.h>

// main function
int main(){
    // variable declaration
    int integer = 100000000;
    float floatNumber = 3.141;
    char character = 'C';
    char character2 = 99;
    double doubleNumber = 3.141;
    long longNumber = 1000000000; // in present, int = long
    long long longlongNumber = 100000000000000000;
    printf("%d %.1f %c %c\n", integer, floatNumber, character, character2);
    printf("------------------------------------------------------------------------------------\n");
    printf("long long:\t %lld\t long:\t %ld\n", longlongNumber, longNumber);
    printf("double:\t\t %.20f\t float:\t %.20f\n", doubleNumber, floatNumber);
    printf("------------------------------------------------------------------------------------\n");
    integer = floatNumber;
    printf("%d %.1f\n", integer, floatNumber);

    return 0;
}