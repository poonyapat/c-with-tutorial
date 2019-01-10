#include <stdio.h>

int main() {
    int number = 10;

    if (number == 10) {
        number = 5;
        if (number == 10) {
            number = 7;
        } else if (number == 5) {
            number = 8;
        } 
        else {
            number = 9;
        }
    }
    else { number = 6; }
    printf("%d\n", number);
}