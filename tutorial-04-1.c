// add library for Input and Output
// stdio => standard IO
#include <stdio.h>

// main function
int main(){
    // variable declaration
    int integer = 100000000;
    float floatNumber = 3.141;
    char character = 'C';
    double doubleNumber = 3.141;
    long longNumber = 1000000000; // in present, int = long
    long long longlongNumber = 100000000000000000;
    printf("size of char      : %d byte\n", sizeof(character));
    printf("size of int       : %d bytes\n", sizeof(integer));
    printf("size of float     : %d bytes\n", sizeof(floatNumber));
    printf("size of double    : %d bytes\n", sizeof(doubleNumber));
    printf("size of long      : %d bytes\n", sizeof(longNumber));
    printf("size of long long : %d bytes\n", sizeof(longlongNumber));
    return 0;
}