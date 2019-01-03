// add library for Input and Output
// stdio => standard IO
#include <stdio.h>

int main(){
    // string
    // 1
    char charArray[] = "hello";
    printf(charArray);
    printf("\n");
    printf("%s\n", charArray);
    // 2
    char charArray2[20];
    charArray2[0] = 'c';
    printf("%s\n",charArray2);

    return 0;
}