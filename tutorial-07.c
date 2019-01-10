#include <stdio.h>

int main(){
    int number;
    scanf("%d", &number);
    if (number > 10){
        printf("%d > 10", number);
    }
    else if (number < 10){
        printf("%d < 10", number);
    }
    else {
        printf("%d = 10", number);
    }
}