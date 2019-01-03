// add library for Input and Output
// stdio => standard IO
#include <stdio.h>

// main function
int main(){
    int arrayInt[] = {1, 2, 3, 4, 5, 6, 7};
    int arrayInt2[10];
    arrayInt2[0] = 10;
    arrayInt2[1] = 12;
    int arrayInt3[10] = {};
    arrayInt3[0] = 10;
    arrayInt3[1] = 12;
    char arrayChar[] = "hello poon";
    printf("%d %d\n", arrayInt[0], arrayInt[1]);
    printf("%d %d %d\n", arrayInt2[0], arrayInt2[1], arrayInt2[2]);
    printf("%d %d %d\n", arrayInt3[0], arrayInt3[1], arrayInt3[2]);
    printf("%s\n", arrayChar);

    int array2D[10][10];
    array2D[0][0] = 10;
    printf("%d %d\n", array2D[0][0], array2D[1][1]);
    return 0;
}