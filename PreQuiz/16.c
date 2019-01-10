#include <stdio.h>

int doSomeMagicWithNumber(int* number) {
    *number = 300;

    return *number;
}

int main() {
    int number = 5;

    printf("%d ", doSomeMagicWithNumber(&number));
    printf("%d", number);
}

// output คืออะไร?