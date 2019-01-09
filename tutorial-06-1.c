// add library for Input and Output
// stdio => standard IO
#include <stdio.h>

int main(){
    // string
    // 3 (advance1) more detail on day3 on topic "Pointer"
    char* charPointer = "hello world";
    printf("%s\n", charPointer);
    
    // 4 (advance2)
    char longString[] = "hello world I'm Poonyyyy";
    longString[11] = '\0';
    printf("%s\n",longString);
    printf(&longString[12]);

    return 0;
}