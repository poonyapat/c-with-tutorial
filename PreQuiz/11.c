#include <stdio.h>

int main() {
    int i, sum = 0;
    for (int i = 0 ; i < 3 ; i++) {
        for (i = 0; i <= 3 ; i++) {
            sum += i;
        }
        sum += i;
    }

    printf("%d", sum);
}

// output คืออะไร?