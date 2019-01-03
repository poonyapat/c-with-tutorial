#include <stdio.h> 
#include <stdbool.h>

int main(){
    bool number1 = false;
    bool number2 = true;
    printf("%d\n", number2 || number1); // (true or false) => true
    printf("%d\n", number2 && number1); // (true and false) => false
    printf("%d\n", !number2); // (not true) => false
    printf("%d\n", !!number2); // (not not true) => true
    return 0;
}