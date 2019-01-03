// add library for Input and Output
// stdio => standard IO
#include <stdio.h>

int main(){
    int array[20];

    printf("size of array : %d bytes\n",sizeof(array));
    printf("size of int   : %d bytes\n", sizeof(int));
    printf("length of array : %d", sizeof(array) / sizeof(int));

    return 0;
}