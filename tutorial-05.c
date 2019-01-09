// add library for Input and Output
// stdio => standard IO
#include <stdio.h>

// concept of array in C is "A box that contain MULTIPLE value of the SAME TYPE"
// Array (in C) != List (in Python)
// Array needs a "fix size" and can't change its size after initialization (in Basic)

int main(){
    int arrayInt[] = {1, 2, 3, 4, 5, 6, 7};     // Initialize array var by give it a array-value, size = 7 element
    int arrayInt2[10];                          // Initialize array by only give it a size
    arrayInt2[0] = 10;                          // assign value to arrayInt2, index = 0
    arrayInt2[1] = 12;                          
    int arrayInt3[10] = {};                     // Same as line 11
    arrayInt3[0] = 10;
    arrayInt3[1] = 12;
    char arrayChar[] = "hello poon";            // String is "Array of Characters" , we don't have data type "String" in C language
    printf("%d %d\n", arrayInt[0], arrayInt[1]);
    printf("%d %d %d\n", arrayInt2[0], arrayInt2[1], arrayInt2[2]);
    printf("%d %d %d\n", arrayInt3[0], arrayInt3[1], arrayInt3[2]);
    printf("%s\n", arrayChar);

    int array2D[10][10];                        // Nested Array or some people call it Array 2D
    array2D[0][0] = 10;
    printf("%d %d\n", array2D[0][0], array2D[1][1]);
    return 0;
}